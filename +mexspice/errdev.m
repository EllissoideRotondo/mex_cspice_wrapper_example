function [] = errdev()
    if coder.target("MATLAB")
        return
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('errdev_c', mexspice.cstring('SET'), uint8(255), mexspice.cstring('NULL'));
    end
end