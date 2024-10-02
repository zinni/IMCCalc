// Cálculo do IMC: implementação
float calculo(float p , float a) {
    if (p <= 0){
        return -1;
    }
    if (a < 0 || a > 3.5){
        return -1;
    }
    return p/(a*a);
}