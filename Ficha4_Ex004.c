#include <stdio.h>
#include <locale.h>

/*EX004 - Numa  casa  existe  uma  caixa no
exterior  que  serve  como  reservat�rio  de  �gua.
Considerando  a  caixa retangular, crie um programa que leia as
dimens�es (comprimento, altura e largura), calcule e escreva o volume
de �gua que pode ser armazenado.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float comp, alt, larg;

    printf("=-=-=-=-=-=-=-=-=-=- CALCULADORA DE VOLUME PARA RET�NGULOS -=-=-=-=-=-=-=-=-=-=\n\n");
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
    printf("O volume da caixa ser� de %.2f m�.\n\n", (comp*alt*larg));
}
