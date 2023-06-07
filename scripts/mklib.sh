#!/usr/bin/env bash

export_dir="../export"

# COMPILAR LIBRERIA
make all -C ../ --no-print-directory
ar rcs ../lib/libtextUtils.a ../build/textUtils.o

# CREAR DIRECTORIO PARA LOS ARCHIVOS DE DISTRIBUCION
mkdir -p $export_dir
mkdir -p $export_dir/include
mkdir -p $export_dir/lib

# METER ARCHIVOS PARA EXPORTACION
cp ../include/toolsUtils.h $export_dir/include
cp ../lib/libtoolsUtils.a $export_dir/lib
