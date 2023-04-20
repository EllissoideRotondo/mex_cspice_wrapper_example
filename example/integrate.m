% [epochs, states] = integrate(epoch, state, frame, center, bodies, grav, lu, kernel)
% 
% Epoch: integration epochs
% State: initial state to propagate
% Frame: name of integration frame
% Center: NAIF ID of central body
% Bodies: NAIF ID perturbing bodies
% Grav: gravitational parameter of center and bodies
% lu: length unit for non-dimensionalization

% Author: Alex Pascarella
% Affiliation: University of Illinois Urbana-Champaign
% Date updated: 04/20/2023

function [epochs, states] = integrate(epoch, state, frame, center, bodies, grav, lu, kernel)

    % Load kernel
    if mexspice.ktotal('ALL') == 0
        mexspice.trcoff()
        mexspice.erract()
        mexspice.errdev()
        for i = 1 : length(kernel)
            mexspice.furnsh(kernel{i})
        end
    end

    % Non-dimensionalize input
    ref_epoch = epoch(1);
    tu = sqrt(lu^3/grav(1));
    vu = lu/tu;
    grav = grav/grav(1);
    state = state ./ [lu; lu; lu; vu; vu; vu];
    epoch = (epoch - ref_epoch)/tu;
    
    % ODE options
    options = odeset('RelTol', 1e-12, 'AbsTol', 1e-13);
    
    % Integrate
    epoch = epoch - epoch(1);
    [epochs, states] = ode89(@ode, epoch, state, options, ref_epoch, frame, center, bodies, grav(2:end), lu, tu);

    % Dimensionalize output
    epochs = ref_epoch + epochs*tu;
    states = states .* [lu, lu, lu, vu, vu, vu];
end


% ODE function
function deriv = ode(time, state, ref_epoch, frame, center, bodies, grav, lu, tu)

    % Initialize output
    deriv = coder.nullcopy( zeros(6, 1) );
    deriv(1:3) = state(4:6);

    % Two-body acceleration
    deriv(4:6) = -state(1:3)/norm(state(1:3))^3;

    % Current epoch
    epoch = ref_epoch + time*tu;

    % Third-body perturbations
    for i = 1 : length(bodies) 
        pos = mexspice.spkgps(bodies(i), epoch, frame, center)/lu;
        deriv(4:6) = deriv(4:6) + third_body(state(1:3), pos(1:3), grav(i));
    end

end

% Third-body perturbation
function accel = third_body(sc_pos, body_pos, mu)
    rel_pos = sc_pos - body_pos;
    accel = - mu * ( rel_pos/norm(rel_pos)^3 + body_pos/norm(body_pos)^3 );
end



    