#include <stdio.h>
#include <locale.h>

//EX003 - Cálculo de IMC

void main(){
    setlocale(LC_ALL, "Portuguese");
    double peso, altura, imc;

    printf("----- SISTEMA DE CÁLCULO DE IMC -----\n\n");
    fflush(stdin); //Limpa a memória
    printf("Introduza seu peso: \(Kg\)");
    scanf("%lf", &peso);
    fflush(stdin);
    printf("Introduza sua altura: \(m\)");
    scanf("%lf", &altura);
    imc = peso/(altura*altura); // cálculo para saber o imc
    printf("\n---------- CALCULANDO IMC ----------\n");
    printf("\nCom base no seu peso de %.2lfKg e a sua altura de %.2lfcm. O seu IMC é de %.2lf.\n\n", peso, altura, imc);

}
