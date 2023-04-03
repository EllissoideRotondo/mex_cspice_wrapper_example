function [] = setbuildinfo(buildInfo)
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
    %
    %% ToDo / Changelog
    % - initial version (11.05.2022 - po)

    % Library paths
    [include_path, source_path, lib_path, lib_name] = build.getlibpath();
    buildInfo.addIncludePaths(include_path);
    buildInfo.addIncludePaths(source_path);
    buildInfo.addLinkObjects(lib_name, lib_path, '', true, true);

    % Additional flag for Windows systems
    if ispc
        buildInfo.addLinkFlags('/NODEFAULTLIB:libcmt');
    end
end
