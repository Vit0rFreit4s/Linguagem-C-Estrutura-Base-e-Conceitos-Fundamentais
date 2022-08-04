#include <stdio.h>
#include <locale.h>

/*EX005 - O Vasco distribui a sua mesada da seguinte forma:
10% saúde, 25% educação, 30% alimentação, 10% vestuário;
5% lazer, 20% outros. Crie um algoritmo que leia a renda mensal líquida,
calcule e escreva o valor aplicado a cada item acima citado.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float mesada;

    printf("=-=-=-=-=-=-=-=- MESADA DO VASCO -=-=-=-=-=-=-=-=\n\n");
    printf("Qual o valor da mesada? ");
    fflush(stdin);
    scanf("%f", &mesada);

    printf("\n---------- RESULTADOS ----------\n\n");
    printf("SAÚDE\t\t[10%%]\t%.2f euros.", (mesada*0.1));
    printf("\nEDUCAÇÃO\t[25%%]\t%.2f euros.",(mesada*0.25));
    printf("\nALIMENTAÇÃO\t[30%%]\t%.2f euros.",(mesada*0.3));
    printf("\nVESTUÁRIO\t[10%%]\t%.2f euros.", (mesada*0.1));
    printf("\nLAZER\t\t[5%% ]\t%.2f euros.", (mesada*0.05));
    printf("\nOUTROS\t\t[20%%]\t%.2f euros.\n\n", (mesada*0.2));
}
