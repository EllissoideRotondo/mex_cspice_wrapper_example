function [] = errdev_c()
    if coder.target("MATLAB")
        return
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('errdev_c', cstring('SET'), uint8(255), cstring('NULL'));
    end
end