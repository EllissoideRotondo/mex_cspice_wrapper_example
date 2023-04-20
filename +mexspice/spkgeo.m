function [targetState, lightTimeCorrection] = spkgeo(target, epoch, referenceFrame, observer)    
    % Check target platform
    if coder.target('MATLAB')
        [targetState, lightTimeCorrection] = cspice_spkgeo(target, epoch, referenceFrame, observer);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Preallocate output
        targetState = zeros(6, 1);
        lightTimeCorrection = 0;
        
        % Call ephemeris
        coder.ceval('spkgeo_c', target, epoch, mexspice.cstring(referenceFrame), ...
                    observer, coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end