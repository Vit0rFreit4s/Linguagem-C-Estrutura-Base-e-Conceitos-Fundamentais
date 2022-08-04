#include <stdio.h>
#include <locale.h>

/*EX002 - Crie um programa que converta graus Celsius em Fahrenheit.
F = 37 x 1,8 + 32*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float graus = 0;

    printf("------------------ CONVERSOR DE TEMPERATURA ----------------------\n");
    printf("Digite a temperatura em Celsius: ");
    fflush(stdin);
    scanf("%f", &graus);

    printf("\n------------------ REALIZANDO A CONVERSÃO ------------------------\n");
    printf("A temperatura de %.2f Cº será de %.2f Fº.\n\n", graus, (graus*1.8+32));

}
