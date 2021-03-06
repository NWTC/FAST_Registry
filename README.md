# FAST Registry for Automatic Code Generation
A utility for generating code for module data types in the [FAST Modularization Framework](https://nwtc.nrel.gov/FAST-Developers "FAST Developers")

**Authors**: John Michalakes and [Bonnie Jonkman](mailto:bonnie.jonkman@nrel.gov), NREL

The FAST Registry allows the developer to specify the data types for a module once and in a single 
location, automating the time consuming and error-prone task of generating the code.  The tables 
in the Registry text input files serve as a data dictionary for improving understandability and maintainability of 
the code.

The FAST Registry is borrowed from a mechanism that was originally developed at NCAR for 
the [Weather Research and Forecast (WRF) model software](http://www.mmm.ucar.edu/wrf/WG2/software_2.0/registry_schaffer.pdf).
It has been modified for the FAST Modularization Framework to create *ModuleName*_Types.f90 files along with any necessary C source code or header files associated
with the *ModuleName*_Types.f90 files.


For more information and syntax, please refer to the [NWTC Programmer's Handbook](https://nwtc.nrel.gov/system/files/ProgrammingHandbook_Mod20130717.pdf).

## Syntax
To create *ModuleName*_Types.f90 from data defined in RegistryFile.txt: 

    c:\> Registry_win32.exe RegistryFile.txt [options] 

To create template *ModuleName*_Registry.txt file:  

    c:\> Registry_win32.exe -registry ModuleName ModName 

To create template file for *ModuleName*.f90:  

    c:\> Registry_win32.exe -template ModuleName ModName 

Summary of options:

    c:\> Registry_win32.exe -h 
    
    ----- FAST Registry (v3.01.00, 11-Jan-2016) --------------
    ----------------------------------------------------------
    Usage: Registry_win32.exe registryfile [options] -or-
              [-force] [-template|-registry] ModuleName ModName
    Options:
        -h                this summary
        -I <dir>          look for usefrom files in directory "dir"
        -O <dir>          generate types files in directory "dir"
        -noextrap         do not generate ModName_Input_ExtrapInterp or ModName_Output_ExtrapInterp routines
        -D<SYM>           define symbol for conditional evaluation inside registry file
        -ccode            generate additional code for interfacing with C/C++
        -keep             do not delete temporary files from registry program
        -shownodes        output a listing of the nodes in registry's AST
      === alternate usage for generating templates ===
        -template ModuleName ModName
                     Generate a template Module file none exists
        -registry ModuleName ModName
                     Generate a template registry file if none exists
        -force Force generating of template or registry file
      (the / character can be used in place of - when specifying options)