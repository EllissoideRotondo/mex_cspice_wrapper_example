function [] = unload(kernels, folder)    
    % Check target platform
    if coder.target('MATLAB')
        for i = 1:length(kernels)
            filePath = fullfile( getEphemerisFolder(), lower(kernels(i).char) );
            cspice_unload(filePath);
        end

    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Iterate over list of kernels
        for i = 1:length(kernels)
            coder.ceval('unload_c', mexspice.cstring( [folder, '/', lower( char( string( kernels(i) ) ) )] ) );
        end

        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end