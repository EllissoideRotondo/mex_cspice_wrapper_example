function state = pxform(from, to, et)

    if coder.target('MATLAB')
        state = cspice_pxform(from, to, et(:)');
    end

end