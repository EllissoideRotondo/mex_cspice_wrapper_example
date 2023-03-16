function [] = setSpiceBuildInfo(buildInfo)
    % Update buildInfo object to include CSPICE library
    %% Description:
    %   This function updates a BuildInfo object by including the CSPICE 
    %   source path, header path and compiled library. This is required
    %   whenever code is generated for a function calling a CSPICE wrapper.
    %
    %% Syntax:
    %   [Astromancer].setSpiceBuildInfo(buildInfo)
    %
    %% Input:
    %     buildInfo [RTW.BuildInfo] - build information used for code generation
    %
    %% Output:
    %     none
    %
    %% Disclaimer:
    %   Last editor : Alex Pascarella
    %   Last edit on: 11.05.2022
    %
    %   Copyright (c) 2022 Alex Pascarella.
    %
    %   This file is part of Astromancer.
    %
    %% ToDo / Changelog
    % - initial version (11.05.2022 - po)

    [includePath, sourcePath, libPath, libName] = build.getSpiceLibraryPath();
    buildInfo.addIncludePaths(includePath);
    buildInfo.addIncludePaths(sourcePath);
    buildInfo.addLinkObjects(libName, libPath, '', true, true);
    if ispc
        buildInfo.addLinkFlags('/NODEFAULTLIB:libcmt');
    end
end
