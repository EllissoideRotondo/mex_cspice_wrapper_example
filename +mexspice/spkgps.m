function [targetState, lightTimeCorrection] = spkgps(target, epoch, referenceFrame, observer)
    % Check target platform
    if coder.target('MATLAB')
        [targetState, lightTimeCorrection] = cspice_spkpos( char( string(target) ), epoch, referenceFrame, 'NONE', char( string(observer) ) );
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Preallocate output
        targetState = zeros(3, 1);
        lightTimeCorrection = 0;
        
        % Call ephemeris
        coder.ceval('spkgps_c', uint16(target), epoch, mexspice.cstring(referenceFrame), ...
                        uint16(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end
