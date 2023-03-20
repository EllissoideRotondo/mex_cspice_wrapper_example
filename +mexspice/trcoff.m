function [] = trcoff()
    if coder.target("MATLAB")
        return
    else
        coder.cinclude('SpiceUsr.h')
        coder.ceval('trcoff_c');
    end
end