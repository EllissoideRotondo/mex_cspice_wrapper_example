function count = ktotal(kind) %#codegen
    if coder.target("MATLAB")
        count = cspice_ktotal(kind);
    else
        % Include header
        coder.cinclude('SpiceUsr.h')
        
        % Call cspice ktotal_c
        count_opaque = coder.opaque('SpiceInt');
        coder.ceval('ktotal_c', mexspice.cstring(kind), coder.wref(count_opaque));
        count = cast(count_opaque, 'uint8');
        
        % Check for errors
        if mexspice.failed()
            message = mexspice.getmsg();
            mexspice.reset();
            error(message)
        end
    end
end