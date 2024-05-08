float capitalPorA(float montoOriginal, int numAnios) {
    float capitalPorA= montoOriginal / numAnios;
    return capitalPorA;
}

float interesAnual(float montoOriginal, float capitalAnual) {
  float interesAnual= 0.165*montoOriginal;
    return interesAnual;
}

float totalAPagar(float capitalAnual, float interes) {
    float totalAPagar=capitalAnual + interes;
    return totalAPagar;
}

float cuotaMensualPorA(float totalAPagar) {
    float cuotamensualPorA= totalAPagar/12;
    return cuotamensualPorA;
}

float MontoImp(float montoOriginal,float Itotal){
    float MontoImp= montoOriginal+Itotal;
    return MontoImp;
}

void prestamo(float numAnios,float montoOriginal,float capital){
        for (int i = 1; i <= numAnios; i++) {
        float interes = interesAnual(montoOriginal, capital);
        float total = totalAPagar(capital, interes);
        float cuotaMensual = cuotaMensualPorA(total);

        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\n", i, capital, interes, total, cuotaMensual);

        montoOriginal -= capital;

        //float MontoTotal=MontoImp(MontoTotal,interes);
        //printf("El monto total a pagar en los 5 años es: %.2f",MontoTotal,interes );
    }
}