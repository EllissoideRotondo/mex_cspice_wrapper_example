function message = getmsg_c() %#codegen
    coder.cinclude('SpiceUsr.h')
    message = cstring(blanks(1840));
    coder.ceval('getmsg_c', cstring('LONG'), uint16(1841), coder.wref(message));
end