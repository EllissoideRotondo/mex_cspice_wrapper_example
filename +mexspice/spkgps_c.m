function [targetState, lightTimeCorrection] = spkgps_c(target, epoch, referenceFrame, observer)
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
        coder.ceval('spkgps_c', uint16(target), epoch, cstring(referenceFrame), ...
                        uint16(observer), coder.wref(targetState), coder.wref(lightTimeCorrection));
    
        % Check for errors
        if failed_c()
            message = getmsg_c();
            reset_c();
            error(message)
        end
    end
end
