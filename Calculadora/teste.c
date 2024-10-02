#include "minunit.h"
#include "calculadora.h"

MU_TEST(teste_calculo_normal){
    double imc = calculo(70, 1.75);
    mu_assert_double_eq(22.8571434021, imc);
}

MU_TEST(test_peso_zero){
    double imc = calculo(0, 1.75);
    mu_assert_double_eq(-1, imc);
}

MU_TEST(test_altura_negativa){
    double imc = calculo(70, -1.75);
    mu_assert_double_eq(-1, imc);
}

MU_TEST(test_altura_muitoalta){
    double imc = calculo(70, 4.25);
    mu_assert_double_eq(-1, imc);
}

MU_TEST(teste_de_controle_erro){
    double imc = calculo(70, 1.75);
    mu_assert_double_eq(666, imc);
}

int main() {
	MU_RUN_TEST(teste_calculo_normal);
    MU_RUN_TEST(test_peso_zero);
    MU_RUN_TEST(test_altura_negativa);
    MU_RUN_TEST(test_altura_muitoalta);
    MU_RUN_TEST(teste_de_controle_erro);
	MU_REPORT();
	return MU_EXIT_CODE;
}