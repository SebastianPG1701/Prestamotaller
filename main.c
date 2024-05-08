#include <stdio.h>
#include "funciones.h"

int main() {
    float montoOriginal; 
    int numAnios; 

    printf("Ingrese el monto original: ");
    scanf("%f", &montoOriginal);

    printf("Ingrese el número de años: ");
    scanf("%d", &numAnios);

    float capital = capitalPorA(montoOriginal, numAnios);

    printf("Año\tCapital\tInterés\tTotal\tCuota Mensual\n");
    printf("-------------------------------------------\n");

    for (int i = 1; i <= numAnios; i++) {
        float interes = interesAnual(montoOriginal, capital);
        float total = totalAPagar(capital, interes);
        float cuotaMensual = cuotaMensualPorA(total);

        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i, capital, interes, total, cuotaMensual);

        montoOriginal -= capital;
    }

    return 0;
}