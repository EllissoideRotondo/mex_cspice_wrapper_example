% Author: Alex Pascarella
% Affiliation: University of Illinois Urbana-Champaign
% Date updated: 04/20/2023

% Reset
clc; clear; close all

% Time and states
tspan = [786009565.3359,  794059269.185381];
xo = [-512.848489519793
         -6769.79447221254
         -694.344584681344
          8.41439718030555
         -1.31455303301221
          6.60182720987256];

% Integration settings
frame = 'J2000';
center = 399;                       % Earth
bodies = [10, 301];                 % Sun and Moon
grav = [398600.435436096, 132712440041.939, 4902.8000661638];
lu = 6378;
kernel = { which('de440s.bsp') };   % Download from NAIF website

% Run integration (non-MEX)
tic; 
[t, x] = integrate(tspan, xo, frame, center, bodies, grav, lu, kernel);
h = toc;
fprintf("Propagation time without MEX: %f seconds\n", h)

% Run integration (MEX)
tic; 
[t2, x2] = integrate_mex(tspan, xo, frame, center, bodies, grav, lu, kernel);
h = toc;
fprintf("Propagation time with MEX: %f seconds\n\n", h)

% Plot trajector
plot(x(:, 1), x(:, 2))