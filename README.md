# Fix_Tablet_Mode
Este script arregla un problema que tienen algunas Laptops de Hp con el modo Tablet el cual provoca que al ser giradas bloquean el uso del mouse y el teclado como la HP ProBook x360 11 G5 EE, desconozco si funcionara en otros modelos, soy nuevo en esto así que si alguien puede comprobar o mejorar el script estaré agradecido.

Tablet Mode Fix

Descripción:

Este mini programa desactiva automáticamente el módulo intel_ish_ipc en laptops HP ProBook x360 para evitar que el sistema entre en modo tablet bloqueando teclado y touchpad al detectar la rotación de la pantalla. Esto es útil para entornos Linux donde no se puede deshabilitar el sensor fácilmente desde la BIOS o herramientas gráficas.


Cómo funciona:

Al ejecutarlo, el programa:

1- Deshabilita el módulo intel_ish_ipc.

2- Agrega el módulo a la lista negra para que no se cargue al inicio.

3- Actualiza el initramfs.

4- Pregunta al usuario si desea reiniciar la PC para aplicar los cambios.


Requisitos:

-Linux (probado en Linux Mint / Ubuntu).

-Permisos de administrador (sudo) para ejecutar los comandos del sistema.


Uso:

1- Coloca el archivo ejecutable tablet_mode_fix y el archivo .desktop en la misma carpeta.

2- Ejecuta el programa desde la terminal o haciendo doble clic en el lanzador.

3- Responde si deseas reiniciar al final del proceso.


Icono:
Se puede personalizar reemplazando el archivo ico.png en la misma carpeta que el lanzador .desktop... la verdad creo que ni pude hacerlo bien :c


Advertencia:
- Diseñado para laptops HP ProBook x360. Otros modelos pueden no ser compatibles.
- Asegúrate de no eliminar accidentalmente otros módulos del sistema.
