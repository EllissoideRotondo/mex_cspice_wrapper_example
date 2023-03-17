function values = bodvcd_c(bodyId, item, maxSize)
        
    % Check target platform
    if coder.target('MATLAB')
        values = cspice_bodvcd(bodyId, item, maxSize);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')

        % Call bodvrd_c
        maxn = uint16(maxSize);
        values = zeros(maxn, 1);
        dim = coder.opaque('int', '0');
        coder.ceval('bodvcd_c', bodyId, cstring(item), maxn, coder.wref(dim), coder.wref(values));

        % Check for errors
        if failed_c()
            message = getmsg_c();
            reset_c();
            error(message)
        end
    end
end