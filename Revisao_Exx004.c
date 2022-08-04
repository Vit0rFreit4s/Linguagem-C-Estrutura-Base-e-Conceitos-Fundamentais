#include <stdio.h>
#include <locale.h>

/*EX004 - Crie um programa para calcular a área de um triângulo retângulo.
O tamanho da base e altura do triângulo devem ser informados pelo utilizador.

A=(base*altura)/2*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float base = 0, altura = 0;

    printf("---------------- CACULADORA DA ÁREA DE UM TRIÂNGULO RETÂNGULO -------------------\n\n");
    printf("Informe a base do triângulo: [cm] ");
    fflush(stdin);
    scanf("%f", &base);
    printf("Informe a altura do triângulo: [cm] ");
    fflush(stdin);
    scanf("%f", &altura);

    printf("\n---------------- CALCULANDO....... ------------------\n\n");
    printf("A área desse triâgulo é de %.2f cm².\n\n", ((base * altura) / 2));



}
