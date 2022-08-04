#include <stdio.h>
#include <locale.h>

/*EX002 - A importância de 10.000 € será dividida entre três vencedores de um concurso.

            Sendo que da quantia total:

            - O primeiro vencedor receberá 46%;
            - O segundo receberá 32%;
            - O terceiro receberá o restante.

            Calcule e imprima a quantia ganha por cada um dos vencedores.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    const int premio = 10000;

    printf("------------------ Divisão de prêmios -------------------\n\n");
    printf("O primeiro vencedor receberá %.2f euros.\n", (premio * 0.46));
    printf("O segundo colocado receberá %.2f euros.\n", (premio * 0.32));
    printf("O terceiro colocado receberá %.2f euros.\n\n", (premio * 0.22));


}
