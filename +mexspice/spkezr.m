function [targetState, lightTimeCorrection] = spkezr(target, epoch, referenceFrame, aberrationCorrection, observer)    
    % Check target platform
    if coder.target('MATLAB')
        [targetState, lightTimeCorrection] = cspice_spkezr(target, epoch(:)', referenceFrame, aberrationCorrection, observer);
    else
        % Preallocate output
        targetState = zeros(6, 1);
        lightTimeCorrection = 0;
        
        % Call ephemeris
        coder.cinclude('SpiceUsr.h');
        coder.ceval('spkezr_c', mexspice.cstring(target), epoch, mexspice.cstring(referenceFrame), ...
            mexspice.cstring(aberrationCorrection), cstring(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end
