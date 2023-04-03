function [] = setup()

    % Get local path
    local_path = pwd;

    % Get script path
    current_file = mfilename('fullpath');
    mice_folder = fullfile(fileparts(current_file), '..');
    
    % Create websave options
    options = weboptions('CertificateFilename', getenv("SSL_CERTIFICATE_PATH"));

    if ismac
        % Download mice archive
        target_path = fullfile(mice_folder, 'mice.tar.Z');
        url = 'https://naif.jpl.nasa.gov/pub/naif/toolkit//MATLAB/MacIntel_OSX_AppleC_MATLAB9.x_64bit/packages/mice.tar.Z';
        websave(target_path, url, options);
        
        % Download mice installation script
        script_path = fullfile(mice_folder, 'importMice.csh');
        url = 'https://naif.jpl.nasa.gov/pub/naif/toolkit//MATLAB/MacIntel_OSX_AppleC_MATLAB9.x_64bit/packages/importMice.csh';
        websave(script_path, url, options);
        
        % Run installation script
        cd(mice_folder)
        system('chmod +x importMice.csh');
        system('./importMice.csh');
        delete('mice.tar', 'importMice.csh');
        cd(local_path)

        % Delete downloaded files
        %delete(target_path)
        %delete(script_path)

    elseif isunix
        % Download mice archive
        target_path = fullfile(mice_folder, 'mice.tar.Z');
        url = 'https://naif.jpl.nasa.gov/pub/naif/toolkit//MATLAB/PC_Linux_GCC_MATLAB9.x_64bit/packages/mice.tar.Z';
        websave(target_path, url, options);
        
        % Download mice installation script
        script_path = fullfile(mice_folder, 'importMice.csh');
        url = 'https://naif.jpl.nasa.gov/pub/naif/toolkit//MATLAB/PC_Linux_GCC_MATLAB9.x_64bit/packages/importMice.csh';
        websave(script_path, url, options);
        
        % Run installation script
        cd(mice_folder)
        system('chmod +x importMice.csh');
        system('./importMice.csh');
        delete('mice.tar', 'importMice.csh');
        cd(local_path)

        % Delete downloaded files
        %delete(target_path)
        %delete(script_path)

    elseif ispc
        % Download mice archive
        target_path = fullfile(mice_folder, 'mice.zip');
        url = 'https://naif.jpl.nasa.gov/pub/naif/toolkit//MATLAB/PC_Windows_VisualC_MATLAB9.x_64bit/packages/mice.zip';
        websave(target_path, url, options);
        
        % Unzip archive
        unzip(target_path, mice_folder)
        delete(target_path)

    else
        disp('Platform not supported')
    end

end