#include <stdio.h>
#include <locale.h>

/*EX002 - A import�ncia de 10.000 � ser� dividida entre tr�s vencedores de um concurso.

            Sendo que da quantia total:

            - O primeiro vencedor receber� 46%;
            - O segundo receber� 32%;
            - O terceiro receber� o restante.

            Calcule e imprima a quantia ganha por cada um dos vencedores.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    const int premio = 10000;

    printf("------------------ Divis�o de pr�mios -------------------\n\n");
    printf("O primeiro vencedor receber� %.2f euros.\n", (premio * 0.46));
    printf("O segundo colocado receber� %.2f euros.\n", (premio * 0.32));
    printf("O terceiro colocado receber� %.2f euros.\n\n", (premio * 0.22));


}
