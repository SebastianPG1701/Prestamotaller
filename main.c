#include <stdio.h>
#include "funciones.h"

int main() {
    float montoOriginal; 
    int numAnios; 

    printf("Ingrese el monto original: ");
    scanf("%f", &montoOriginal);

    printf("Ingrese el numero de anios: ");
    scanf("%d", &numAnios);

    float capital = capitalPorA(montoOriginal, numAnios);

    printf("Año\tCapital\tInterés\tTotal\tCuota Mensual\n");
    printf("-------------------------------------------\n");

    return 0;
}