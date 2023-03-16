function [includePath, sourcePath, libraryPath, libraryName, headerPath] = getSpiceLibraryPath()
    % Get mice path
    currentFile = mfilename('fullpath');
    currentPath = fileparts( currentFile );
    micePath = fullfile(currentPath, '..', '..', 'external', 'mice');
    assert(isfolder(micePath), 'Error: mice folder is missing. Run setup.m to download the required dependencies')
    
    % Allocate output
    includePath = fullfile(micePath, 'include');
    sourcePath = fullfile(micePath, 'src', 'cspice');
    headerPath = fullfile(sourcePath, 'SpiceUsr.h');
    libraryPath = fullfile(micePath, 'lib');
    if ispc
        libraryName = 'cspice.lib';
    else
        libraryName = 'cspice.a';
    end
end
