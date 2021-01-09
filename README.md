# CfgEdit
## Configurate bcfg files

* Sources for Elfloader 3.x+
* Need [gcc](https://github.com/siemens-elfloader/gcc)




# Code::Blocks settings

## 1. Settings -> Compiler and debuger settings.
    Select "GNU ARM GCC Compiler"

## 2.  Compiler settings -> Compiler Flags
    [x] -mlittle-endian
    [x] -msoft-float

## 2.1. Other options
    -mcpu=arm926ej-s -nostdlib -fshort-wchar
    -fno-exceptions -fdata-sections -ffunction-sections

## 3. Linker settings
### ----> Other linker options:
    -marmelf
    -z max-page-size=1
    -nostdlib

## 4. Search directories
### Compiler
    path/to/include
### Linker
    path/to/libs

## 5. Toolchain executables
### ----> Compiler`s installation directory
     arm-eabi-gcc
     arm-eabi-g++
     arm-eabi-ld
     arm-eabi-ar

## 6. Other settings
### ----> Advanced options
#### Commands
###### -> Select Link object files to dynamic library
    $linker -shared -s -Bsymbolic -Bsymbolic-function -soname=$exe_name.$exe_ext $libdirs $link_objects $link_resobjects -o $exe_output $link_options $libs

###### -> Link object files (to executable && to console executable)
    $linker -pie $libdirs -o $exe_output $link_objects $link_resobjects $link_options $libs
