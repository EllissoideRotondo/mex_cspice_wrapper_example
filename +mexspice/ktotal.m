function count = ktotal_c(kind) %#codegen
    if coder.target("MATLAB")
        count = cspice_ktotal(kind);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')
        
        % Call cspice ktotal_c
        count_opaque = coder.opaque('SpiceInt');
        coder.ceval('ktotal_c', cstring(kind), coder.wref(count_opaque));
        count = cast(count_opaque, 'uint8');
        
        % Check for errors
        if failed_c()
            message = getmsg_c();
            reset_c();
            error(message)
        end
    end
end