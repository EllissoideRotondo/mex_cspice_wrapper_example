% Author: Alex Pascarella
% Affiliation: University of Illinois Urbana-Champaign
% Date created: 04/05/2022

function [starg, lt] = spkezr_wrapper(varargin) %#codegen
    
    % Include C files required for code generation 
    coder.updateBuildInfo('addIncludePaths', 'C:\Users\alexp\Documents\mice\include')
    coder.updateBuildInfo('addIncludePaths', 'C:\Users\alexp\Documents\mice\src\cspice')
    libPriority = '';
    libPreCompiled = true;
    libLinkOnly = true;
    libName = 'cspice.lib';
    libPath = 'C:\Users\alexp\Documents\mice\lib';
    coder.updateBuildInfo('addLinkObjects', libName, libPath, libPriority, libPreCompiled, libLinkOnly);
    coder.cinclude('C:\Users\alexp\Documents\mice\src\cspice\SpiceUsr.h')
    coder.extrinsic('error')
    
    % Set error device 
    coder.ceval('errdev_c', ['SET' 0], uint8(255), ['NULL', 0]);

    % Set error behavior
    coder.ceval('erract_c', ['SET' 0], uint8(255), ['RETURN' 0]);
    
    % Preallocate output
    starg = zeros(6, 1);
    lt = 0;
    
    % Call ephemeris
    if nargin == 5
        [targ, et, ref, abcorr, obs] = varargin{:};
        starg = zeros(6, 1);
        lt = 0;
        coder.ceval('spkezr_c', [targ 0], et, [ref 0], [abcorr 0], [obs 0], coder.wref(starg), coder.wref(lt));
    elseif nargin == 1
        bspfile = [varargin{1} 0];
        coder.ceval('furnsh_c', bspfile);  
    else
        coder.ceval('kclear_c'); % Unload kernels
    end

    % Check for errors
    failed = false;
    failed = coder.ceval('failed_c');
    msg = [blanks(1840) 0];
    if failed
        coder.ceval('getmsg_c', ['LONG' 0], uint16(1841), coder.wref(msg));
        coder.ceval('reset_c');
        error(msg)
    end
end
