function values = bodvrd(bodyName, item, maxSize)
        
    % Check target platform
    if coder.target('MATLAB')
        values = cspice_bodvrd(bodyName, item, maxSize);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Call bodvrd_c
        maxn = uint16(maxSize);
        values = zeros(maxn, 1);
        dim = coder.opaque('int', '0');
        coder.ceval('bodvrd_c', mexspice.cstring(bodyName), mexspice.cstring(item), maxn, coder.wref(dim), coder.wref(values));

        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg;
            mexspice.reset;
            error(message)
        end
    end
end