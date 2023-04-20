% Author: Alex Pascarella
% Affiliation: University of Illinois Urbana-Champaign
% Date updated: 04/20/2023

% Cd into local folder
cpath = fileparts( mfilename("fullpath") );
cd(cpath)

% Coder config
cfg = coder.config();
cfg.PostCodeGenCommand = 'mexspice.setbuildinfo(buildInfo)';

% Coder types
coder_char = coder.newtype('char', [1 Inf], [0 1]);
coder_dvec = coder.newtype('double', [1 Inf], [0 1]);
childTypes = struct();
childTypes.t_1 = coder.newtype('char', [1 Inf], [0 1]);
coder_cell = coder.newtype('cell', {childTypes.t_1}, [1 Inf], [0 1]);
coder_cell = coder_cell.makeHomogeneous();

% Build MEX
codegen integrate -args {[0, 0], zeros(6, 1), coder_char, 0, coder_dvec, coder_dvec, 0, coder_cell} -config cfg