#include <stdio.h>
#include <locale.h>

/*Ex001 - Pretende-se calcular o montante total dispon�vel ao fim de um ano
de dois dep�sitos banc�rios feitos, no mesmo dia, em bancos diferentes, sabendo
que o juro num banco � de 9% e no outro � de 7%.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float dep1, dep2;

    printf("=-=-=-=-=- JUROS BANC�RIO -=-=-=-=-=\n\n");
    printf("Digite o montante do banco A: ");
    fflush(stdin);
    scanf("%f", &dep1);
    printf("Digite o montante do banco B: ");
    fflush(stdin);
    scanf("%f", &dep2);

    printf("\nCalculando............... \n\n");
    printf("Para um dep�sito de %.2f Euros com uma taxa de juros de 9%% no banco A mais 7%% no banco B,\nteremos ao fim de um ano o valor de %.2f Euros.\n\n"
           , (dep1 + dep2), (dep1*1.09+dep2*1.07));
}
