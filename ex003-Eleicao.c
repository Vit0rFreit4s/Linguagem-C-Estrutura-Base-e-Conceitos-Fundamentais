#include <stdio.h>
#include <locale.h>

/*
Uma institui��o de ensino realizou uma pesquisa sobre os eleitores
de um munic�pio que participaram numa  dada  elei��o.  Crie  um  programa  que
leia  o  total  de  votos  brancos,  nulos  e  v�lidos.  Calcule  e escreva a
percentagem que cada um representa emrela��o ao total de eleitores.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int brancos, nulos, validos, total;

    printf("=-=-=-=-=-=-=-=-=-=- ELEI��ES -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite a quantidade de votos em Branco: ");
    fflush(stdin);
    scanf("%i", &brancos);
    printf("Digite a quantidade de votos Nulos: ");
    fflush(stdin);
    scanf("%i", &nulos);
    printf("Digite a quantidade de votos V�lidos: ");
    fflush(stdin);
    scanf("%i", &validos);

    total = brancos+nulos+validos;

    printf("\n-------------------------------- RESULTADOS --------------------------------\n\n");
    printf("Essa elei��o contou com %i votos sendo que: \n\n%i Brancos\t%.2f%%.\n%i Nulos\t\t%.2f%%.\n%i V�lidos\t%.2f%%.\n\n", total, brancos, (((float)brancos/total)*100), nulos, (((float)nulos/total)*100), validos, (((float)validos/total)*100));

}
