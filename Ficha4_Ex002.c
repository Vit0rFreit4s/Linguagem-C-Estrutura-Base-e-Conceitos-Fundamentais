#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*EX002 - Elabore  um  programa  que  leia  a  velocidade  m�xima
  numa  localidade  e  a  velocidade  com  que  o condutor conduzia
  e calcule o valor da multa, considerando que s�o pagos 5 Euros por
  cada km/h que estiver acima da velocidade permitida.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int vel_max, vel_cond;

    printf("=-=-=-=-=-=-=-=-=-=- CALCULADOR DE MULTA -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Qual a velocidade m�xima da localidade? ");
    fflush(stdin);
    scanf("%i", &vel_max);
    printf("Qual a velocidade em que conduzia? ");
    fflush(stdin);
    scanf("%i", &vel_cond);

    printf("\n----------- CALCULANDO ----------\n");
    printf("Sabendo que a velocidade da localidade era de %i Km/h.\nE que o ve�culo estava � %i Km/h.\nE que ser�o cobrados 5 euros por cada Km/h acima da velocidade.\nDessa forma teremos uma multa no valor de %i euros.\n\n",
           vel_max, vel_cond, ((vel_cond-vel_max)*5));

}
