function [targetState, lightTimeCorrection] = spkpos_c(target, epoch, referenceFrame, aberrationCorrection, observer)    
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
        coder.ceval('spkpos_c', cstring(target), epoch, cstring(referenceFrame), ...
            cstring(aberrationCorrection), cstring(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if failed_c()
            message = getmsg_c();
            reset_c();
            error(message)
        end
    end
end
