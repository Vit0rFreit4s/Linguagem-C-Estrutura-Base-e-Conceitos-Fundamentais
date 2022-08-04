#include <stdio.h>
#include <locale.h>

/*
Uma instituição de ensino realizou uma pesquisa sobre os eleitores
de um município que participaram numa  dada  eleição.  Crie  um  programa  que
leia  o  total  de  votos  brancos,  nulos  e  válidos.  Calcule  e escreva a
percentagem que cada um representa emrelação ao total de eleitores.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int brancos, nulos, validos, total;

    printf("=-=-=-=-=-=-=-=-=-=- ELEIÇÕES -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite a quantidade de votos em Branco: ");
    fflush(stdin);
    scanf("%i", &brancos);
    printf("Digite a quantidade de votos Nulos: ");
    fflush(stdin);
    scanf("%i", &nulos);
    printf("Digite a quantidade de votos Válidos: ");
    fflush(stdin);
    scanf("%i", &validos);

    total = brancos+nulos+validos;

    printf("\n-------------------------------- RESULTADOS --------------------------------\n\n");
    printf("Essa eleição contou com %i votos sendo que: \n\n%i Brancos\t%.2f%%.\n%i Nulos\t\t%.2f%%.\n%i Válidos\t%.2f%%.\n\n", total, brancos, (((float)brancos/total)*100), nulos, (((float)nulos/total)*100), validos, (((float)validos/total)*100));

}
