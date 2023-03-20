function message = getmsg() %#codegen
    coder.cinclude('SpiceUsr.h')
    message = mexspice.cstring(blanks(1840));
    coder.ceval('getmsg_c', mexspice.cstring('LONG'), uint16(1841), coder.wref(message));
end