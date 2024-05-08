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