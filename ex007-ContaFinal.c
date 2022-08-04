#include <stdio.h>
#include <locale.h>

//EX006 - Calcular a conta final de um jantar

void main(){
    setlocale(LC_ALL, "Portuguese");

    int pessoas;
    float valor_final;

    printf("---------- PROGRAMA PARA CALCULAR CONTAS ----------\n\n");
    printf("Digite a quantidade de pessoas: ");
    fflush(stdin);
    scanf("%i", &pessoas);

    valor_final = (pessoas*15*0.1) + pessoas*15;

    printf("Sabendo que %i pessoas comeram e que o rodízio tem o valor de £15,00, mais os 10%% para os garçons. O valor final será de £%.2f.\n\n",
           pessoas, valor_final);
}
