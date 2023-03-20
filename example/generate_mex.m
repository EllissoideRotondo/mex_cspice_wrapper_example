% Author: Alex Pascarella
% Affiliation: University of Illinois Urbana-Champaign
% Date created: 04/05/2022

% Generate code
addpath('./wrappers')
str = coder.newtype('char', [1 Inf], [0 1]);
codegen spkezr_wrapper -args {str, 0, str, str str} -args {str} -args {} -o ./mex/spkezr_c -lang:c
codegen spkezr_wrapper -args {str, 0, str, str str} -args {str} -args {} -o ./mex/spkezr_cpp -lang:c++