#include <stdio.h>
#include <locale.h>

//EX005 - Crie um programa que converta euros em d�lares � taxa de c�mbio do dia de 28-04-2022.

void main(){
    setlocale(LC_ALL, "Portuguese");

    const double Taxa_de_cambio = 1.05905;
    float euros = 0;

    printf("-------------- CONVERSOR DE MOEDA --------------------\n");
    printf("Euros: ");
    fflush(stdin);
    scanf("%f", &euros);

    printf("--------------- CONVERTENDO... ------------------\n");
    printf("O valor %.2f euros em d�lares ser� de %.2f d�lares para a cota��o de 28/04/2022.", euros, euros*Taxa_de_cambio);

}
