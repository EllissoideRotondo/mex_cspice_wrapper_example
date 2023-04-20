function [] = furnsh(kernel)    
    % Check target platform
    if coder.target('MATLAB')
        cspice_furnsh(kernel);

    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Iterate over list of kernels
        coder.ceval( 'furnsh_c', mexspice.cstring(kernel) );

        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end