#include <stdio.h>
#include <locale.h>

/*Ex003 - Crie um algoritmo que leia o pre�o anterior e pre�o atual
 de 1 artigo b�sico e determine a taxa de infla��o desse artigo.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float preco_antes, preco_atual;

    printf("=-=-=-=-=- CALCULADORA DE INFLA��O -=-=-=-=-=\n\n");

    printf("Digite o pre�o anterior do produto: ");
    fflush(stdin);
    scanf("%f", &preco_antes);
    printf("Digite o pre�o atual do produto: ");
    fflush(stdin);
    scanf("%f", &preco_atual);

    printf("\n--------- CALCULANDO A INFLA��O ---------\n\n");
    printf("A taxa de infla��o sobre esse artigo � de %.1f%%.\n\n", (((preco_atual-preco_antes)/preco_antes)*100));
}
