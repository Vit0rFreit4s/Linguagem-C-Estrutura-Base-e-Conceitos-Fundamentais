#include <stdio.h>
#include <locale.h>

//EX003 - C�lculo de IMC

void main(){
    setlocale(LC_ALL, "Portuguese");
    double peso, altura, imc;

    printf("----- SISTEMA DE C�LCULO DE IMC -----\n\n");
    fflush(stdin); //Limpa a mem�ria
    printf("Introduza seu peso: \(Kg\)");
    scanf("%lf", &peso);
    fflush(stdin);
    printf("Introduza sua altura: \(m\)");
    scanf("%lf", &altura);
    imc = peso/(altura*altura); // c�lculo para saber o imc
    printf("\n---------- CALCULANDO IMC ----------\n");
    printf("\nCom base no seu peso de %.2lfKg e a sua altura de %.2lfcm. O seu IMC � de %.2lf.\n\n", peso, altura, imc);

}
