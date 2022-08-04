#include <stdio.h>
#include <locale.h>

/*
Implemente um programaque leia quantos minutos por dia um aluno pode estudar.
Calcule e escreva ao final de 90 dias quanto tempo em horas ele estudou.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int min;

    printf("=-=-=-=-=-=-=-=-=-=- QUANTAS HORAS VOCÊ ESTUDOU ESSE TRIMESTRE -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Quantos minutos por dia você estudou esse trimestre? ");
    fflush(stdin);
    scanf("%i", &min);

    printf("\nCalculando......................\n\n");
    printf("Em 90 dias você estudou %.1f horas.\n\n", (min/(float)60)*90);

}
