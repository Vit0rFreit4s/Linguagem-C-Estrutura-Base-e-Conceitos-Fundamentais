#include <stdio.h>
#include <locale.h>

/*EX004 - Crie um programa para calcular a �rea de um tri�ngulo ret�ngulo.
O tamanho da base e altura do tri�ngulo devem ser informados pelo utilizador.

A=(base*altura)/2*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float base = 0, altura = 0;

    printf("---------------- CACULADORA DA �REA DE UM TRI�NGULO RET�NGULO -------------------\n\n");
    printf("Informe a base do tri�ngulo: [cm] ");
    fflush(stdin);
    scanf("%f", &base);
    printf("Informe a altura do tri�ngulo: [cm] ");
    fflush(stdin);
    scanf("%f", &altura);

    printf("\n---------------- CALCULANDO....... ------------------\n\n");
    printf("A �rea desse tri�gulo � de %.2f cm�.\n\n", ((base * altura) / 2));



}
