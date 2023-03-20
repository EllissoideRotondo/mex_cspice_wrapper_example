function [] = erract()
    if coder.target("MATLAB")
        return
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('erract_c', mexspice.cstring('SET'), uint8(255), mexspice.cstring('RETURN'));
    end
end