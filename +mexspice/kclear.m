function [] = kclear_c() %#codegen
    if coder.target("MATLAB")
        cspice_kclear()
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('kclear_c');
    end
end