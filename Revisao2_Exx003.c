#include <stdio.h>
#include <locale.h>

/*EX003 - Crie um programa que converta euros em libras à taxa de câmbio do dia de 28-04-
2022.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    const double Taxa_de_cambio = 0.842;
    float euros = 0;

    printf("-------------- CONVERSOR DE MOEDA --------------------\n");
    printf("Euros: ");
    fflush(stdin);
    scanf("%f", &euros);

    printf("--------------- CONVERTENDO... ------------------\n");
    printf("O valor %.2f euros em libras será de %.2f £ para a cotação de 28/04/2022.", euros, euros*Taxa_de_cambio);

}
