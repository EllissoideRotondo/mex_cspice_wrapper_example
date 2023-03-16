function [targetState, lightTimeCorrection] = spkezr_c(target, epoch, referenceFrame, aberrationCorrection, observer)    
    % Check target platform
    if coder.target('MATLAB')
        [targetState, lightTimeCorrection] = cspice_spkezr(target, epoch, referenceFrame, aberrationCorrection, observer);
    else
        % Preallocate output
        targetState = zeros(6, 1);
        lightTimeCorrection = 0;
        
        % Call ephemeris
        coder.cinclude('SpiceUsr.h');
        coder.ceval('spkezr_c', cstring(target), epoch, cstring(referenceFrame), ...
            cstring(aberrationCorrection), cstring(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if failed_c()
            message = getmsg_c();
            reset_c();
            error(message)
        end
    end
end
