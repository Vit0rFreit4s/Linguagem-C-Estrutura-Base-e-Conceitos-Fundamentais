#include <stdio.h>
#include <locale.h>

/*EX004 - Numa  casa  existe  uma  caixa no
exterior  que  serve  como  reservatório  de  água.
Considerando  a  caixa retangular, crie um programa que leia as
dimensões (comprimento, altura e largura), calcule e escreva o volume
de água que pode ser armazenado.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float comp, alt, larg;

    printf("=-=-=-=-=-=-=-=-=-=- CALCULADORA DE VOLUME PARA RETÂNGULOS -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o comprimento da caixa: [m] ");
    fflush(stdin);
    scanf("%f", &comp);
    printf("Digite a altura da caixa: [m] ");
    fflush(stdin);
    scanf("%f", &alt);
    printf("Digite a largura da caixa: [m] ");
    fflush(stdin);
    scanf("%f", &larg);

    printf("\n---------------- CONTABILIZANDO ----------------\n");
    printf("O volume da caixa será de %.2f m³.\n\n", (comp*alt*larg));
}
