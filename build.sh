#!/bin/bash

# Obtener ruta de la carpeta donde está el script
DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$DIR"

# Compilar el C
echo "Compilando tablet_mode_fix.c..."
gcc tablet_mode_fix.c -o tablet_mode_fix
if [ $? -ne 0 ]; then
    echo "Error al compilar. Revisa tablet_mode_fix.c"
    exit 1
fi

# Hacer ejecutable el binario
chmod +x tablet_mode_fix

# Hacer ejecutable el .desktop
chmod +x TabletModeFix.desktop

echo "Todo listo! Puedes hacer doble clic en TabletModeFix.desktop para ejecutar el arreglo."
