#include <stdio.h>
#include <locale.h>

/*
Crie um programa em C que leia dois valores para as variáveis A e B.
Efetue a troca dos valores, para que a variável A passe a ter o valor
da variável B e que a variável B passe a ter o valor da variável A. Apresente os valores trocados.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("=-=-=-=-=- TROCA DE VALORES -=-=-=-=-=\n\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &a);
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &b);

    c=a; a=b; b=c;

    printf("\nO valor %i digitado agora vale %i.", a, b);
    printf("\nE o valor %i digitado agora vale %i.\n\n", b, a);

}
