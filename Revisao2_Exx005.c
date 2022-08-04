#include <stdio.h>
#include <locale.h>

/*EX005 - Elabore um programa que leia três valores e apresente, como resultado fina, a soma
dos quadrados dos três valores lidos.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int v1 = 0, v2 = 0, v3 = 0;

    printf("--------------- A SOMA DOS QUADRADOS -------------------\n");
    printf("Digite o 1º valor: ");
    fflush(stdin);
    scanf("%i", &v1);
    printf("Digite o 2º valor: ");
    fflush(stdin);
    scanf("%i", &v2);
    printf("Digite o 3º valor: ");
    fflush(stdin);
    scanf("%i", &v3);

    printf("\n---------------- CALCULANDO ------------------------\n");
    printf("A soma dos quadrados dos três valores é de %i.\n\n", (v1*v1)+(v2*v2)+(v3*v3));
}
