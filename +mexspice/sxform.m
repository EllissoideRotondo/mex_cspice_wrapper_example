function state = sxform(from, to, et)

    if coder.target('MATLAB')
        state = cspice_sxform(from, to, et(:)');
    end

end