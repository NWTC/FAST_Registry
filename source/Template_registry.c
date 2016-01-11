char *template_registry[] = {
"###################################################################################################################################",
"# Registry for ModuleName in the FAST Modularization Framework",
"# This Registry file is used to create MODULE ModuleName_Types, which contains all of the user-defined types needed in ModuleName.",
"# It also contains copy, destroy, pack, and unpack routines associated with each defined data types.",
"#",
"# Entries are of the form",
"# keyword <ModuleName/ModName> <TypeName>    <FieldType>    <FieldName>  <Dims>  <IO> <DNAME> <DESCRIP> <UNITS>",
"#",
"# Use ^ as a shortcut for the value from the previous line.",
"# See NWTC Programmer's Handbook at https://nwtc.nrel.gov/FAST-Developers for further information on the format/contents of this file.",
"###################################################################################################################################",
"",
"# ...... Include files (definitions from NWTC Library) ............................................................................",
"include Registry_NWTC_Library.txt",
"",
"",
"# ..... Initialization data .......................................................................................................",
"# Define inputs that the initialization routine may need here:",
"#   e.g., the name of the input file, the file root name, etc.",
"typedef ModuleName/ModName InitInputType CHARACTER(1024) InputFile  - - -   \"Name of the input file; remove if there is no file\" -",
"",
"# Define outputs from the initialization routine here:",
"typedef   ^               InitOutputType CHARACTER(ChanLen) WriteOutputHdr  {:} - -   \"Names of the output-to-file channels\" -",
"typedef   ^               InitOutputType CHARACTER(ChanLen) WriteOutputUnt  {:} - -   \"Units of the output-to-file channels\" -",
"",
"",
"# ..... States ....................................................................................................................",
"# Define continuous (differentiable) states here:",
"typedef    ^              ContinuousStateType ReKi     DummyContState - - -  \"Remove this variable if you have continuous states\" -",
"",
"# Define discrete (nondifferentiable) states here:",
"typedef   ^               DiscreteStateType   ReKi     DummyDiscState - - -  \"Remove this variable if you have discrete states\" -",
"",
"# Define constraint states here:",
"typedef   ^               ConstraintStateType ReKi     DummyConstrState - - - \"Remove this variable if you have constraint states\" -",
"",
"# Define any other states, including integer or logical states here:",
"typedef   ^               OtherStateType      IntKi    DummyOtherState - - - \"Remove this variable if you have other states\" -",
"",
"",
"# ..... Misc/Optimization variables.................................................................................................",
"# Define any data that are used only for efficiency purposes (these variables are not associated with time):",
"#   e.g. indices for searching in an array, large arrays that are local variables in any routine called multiple times, etc.",
"typedef    ^              MiscVarType          ReKi     DummyMiscVar - - -  \"Remove this variable if you have misc/optimization variables\" -",
"",
"",
"# ..... Parameters ................................................................................................................",
"# Define parameters here:",
"# Time step for integration of continuous states (if a fixed-step integrator is used) and update of discrete states:",
"typedef  ^               ParameterType         DbKi     DT - - - \"Time step for cont. state integration & disc. state update\" seconds",
"",
"",
"# ..... Inputs ....................................................................................................................",
"# Define inputs that are contained on the mesh here:",
"#typedef   ^                InputType           MeshType MeshedInput - - -     \"Meshed data\" -",
"# Define inputs that are not on this mesh here:",
"typedef   ^                InputType           ReKi     DummyInput  - - -     \"Remove this variable if you have input data\" -",
"",
"",
"# ..... Outputs ...................................................................................................................",
"# Define outputs that are contained on the mesh here:",
"#typedef   ^                OutputType          MeshType MeshedOutput - - -    \"Meshed data\" -",
"# Define outputs that are not on this mesh here:",
"typedef   ^                OutputType          ReKi     WriteOutput {:} - -   \"Example of data to be written to an output file\" \"s,-\"",
"",
0L } ;
