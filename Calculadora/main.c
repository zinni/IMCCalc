#include <stdio.h>
#include "calculadora.h"
#include <locale.h>


int main(){
    float peso, altura, imc;

    // Define a localidade para português Brasil com suporte a UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Solicita o peso e altura ao usuário
    printf("Digite o seu peso (em kg x,xx): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (em metros x,xx): ");
    scanf("%f", &altura);

    // Chama a função de cálculo do IMC
    imc = calculo(peso, altura);

    // Exibe o resultado do IMC
    printf("Seu IMC é: %.2f\n", imc);

    // Classificação do IMC
    if (imc < 18.5) {
        printf("Classificação: Magreza\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificação: Normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }

    return 0;
}