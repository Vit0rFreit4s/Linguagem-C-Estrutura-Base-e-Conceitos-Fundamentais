#include <stdio.h>
#include <locale.h>

/*Ex003 - Crie um algoritmo que leia o preço anterior e preço atual
 de 1 artigo básico e determine a taxa de inflação desse artigo.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float preco_antes, preco_atual;

    printf("=-=-=-=-=- CALCULADORA DE INFLAÇÃO -=-=-=-=-=\n\n");

    printf("Digite o preço anterior do produto: ");
    fflush(stdin);
    scanf("%f", &preco_antes);
    printf("Digite o preço atual do produto: ");
    fflush(stdin);
    scanf("%f", &preco_atual);

    printf("\n--------- CALCULANDO A INFLAÇÃO ---------\n\n");
    printf("A taxa de inflação sobre esse artigo é de %.1f%%.\n\n", (((preco_atual-preco_antes)/preco_antes)*100));
}
