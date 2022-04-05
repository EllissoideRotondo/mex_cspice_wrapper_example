% Clear environment
clc; clear
addpath('./wrappers');
addpath('./mex');

% Test case
targ = 'EARTH BARYCENTER';
et = 134784000;
ref = 'J2000';
abcorr = 'NONE';
obs = 'SSB';

% Load ephemeris
cspice_furnsh('./kernels/de410mini.bsp'); % <-- load ephemeris in mice
spkezr_c('./kernels/de410mini.bsp'); % <-- load epehemeris for C wrapper file
spkezr_cpp('./kernels/de410mini.bsp'); % <-- load epehemeris for CPP wrapper file

% Measure execution time
n = 1e4;
time = zeros(n, 3);
delta = zeros(n, 1);
disp('Query mice and cspice wrappers')
for i = 1:n

    % MICE
    tic
    [starg, lt] = cspice_spkezr(targ, et, ref, abcorr, obs);
    time(i, 1) = toc;

    % CSPICE wrapper (C)
    tic
    [starg_1, lt_1] = spkezr_c(targ, et, ref, abcorr, obs);
    time(i, 2) = toc;

    % CSPICE wrapper (CPP)
    tic
    [starg_2, lt_2] = spkezr_cpp(targ, et, ref, abcorr, obs);
    time(i, 3) = toc;

    % Verify the results are identical
    delta(i) = norm(starg - starg_1 + starg - starg_2);
end

% Plot execution time
close all
figure(1)
semilogy(time, 'linewidth', 1)
legend('Mice', 'Cspice wrapper (C)', 'Cspice wrapper (CPP)')
xlabel('Function call')
ylabel('Execution time (s)')

% Verify results
assert(norm(delta) == 0);
disp('First part completed succesfully')

% Generate an error within cspice and catch it from Matlab
disp('Showing error behavior now. Matlab will NOT crash')
pause(0.5)
try
    [~, ~] = spkezr('random string');
catch ME
    warning(ME.message)
end