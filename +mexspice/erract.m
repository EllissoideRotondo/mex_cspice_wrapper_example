function [] = erract_c()
    if coder.target("MATLAB")
        return
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('erract_c', cstring('SET'), uint8(255), cstring('RETURN'));
    end
end