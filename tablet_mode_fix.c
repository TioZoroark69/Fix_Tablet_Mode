#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("Deshabilitando intel_ish_ipc...\n");

    system("sudo modprobe -r intel_ish_ipc");
    system("echo 'blacklist intel_ish_ipc' | sudo tee /etc/modprobe.d/blacklist-intel_ish_ipc.conf");
    system("sudo update-initramfs -u");

    // Preguntar al usuario si quiere reiniciar
    char respuesta;
    printf("Debes reiniciar, ¿Quieres reiniciar ahora? (s/N): ");
    scanf(" %c", &respuesta);
    if (respuesta == 's' || respuesta == 'S') {
        printf("Reiniciando...\n");
        system("sudo reboot");
    } else {
        printf("No se reinició. Salida del programa.\n");
    }

    return 0;
}

