function [] = reset_c
        coder.cinclude('SpiceUsr.h')
    coder.ceval('reset_c');
end