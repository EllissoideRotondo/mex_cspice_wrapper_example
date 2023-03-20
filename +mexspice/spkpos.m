function [targetState, lightTimeCorrection] = spkpos(target, epoch, referenceFrame, aberrationCorrection, observer)    
    % Check target platform
    if coder.target('MATLAB')
        [targetState, lightTimeCorrection] = cspice_spkpos(target, epoch, referenceFrame, aberrationCorrection, observer);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Preallocate output
        targetState = zeros(3, 1);
        lightTimeCorrection = 0;
        
        % Call ephemeris
        coder.cinclude('SpiceUsr.h');
        coder.ceval('spkpos_c', mexspice.cstring(target), epoch, mexspice.cstring(referenceFrame), ...
            mexspice.cstring(aberrationCorrection), mexspice.cstring(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end
