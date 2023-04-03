function [include_path, source_path, library_path, library_name, header_path] = getlibpath()
    
    % Get mice path
    current_path = fileparts( mfilename('fullpath') );
    mice_path = fullfile(current_path, '..', 'mice');
    assert(isfolder(mice_path), 'Error: mice folder is missing. Run mexspice.setup to download the required dependencies')
    
    % Library paths
    include_path = fullfile(mice_path, 'include');
    source_path = fullfile(mice_path, 'src', 'cspice');
    header_path = fullfile(source_path, 'SpiceUsr.h');
    library_path = fullfile(mice_path, 'lib');

    % Library name
    if ispc
        library_name = 'cspice.lib';
    else
        library_name = 'cspice.a';
    end
    
end
