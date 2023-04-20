function [] = reset
    coder.cinclude('SpiceUsr.h')
    coder.ceval('reset_c');
end