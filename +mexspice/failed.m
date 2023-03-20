function failed = failed() %#codegen
    coder.cinclude('SpiceUsr.h')
    failed = coder.nullcopy(false);
    failed = coder.ceval('failed_c');
end