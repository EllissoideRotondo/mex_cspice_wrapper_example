function et = str2et(string)
    if coder.target('MATLAB')
        furnsh_c(Ephemeris.NAIF0012)
        et = cspice_str2et(string);
        unload_c(Ephemeris.NAIF0012)
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Load kernels
        et = 0;
        coder.ceval('str2et_c', mexspice.cstring(string), coder.wref(et));

        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end