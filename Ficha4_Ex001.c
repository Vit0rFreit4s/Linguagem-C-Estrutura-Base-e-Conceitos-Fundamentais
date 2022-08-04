#include <stdio.h>
#include <locale.h>

//EX001 - Codifique em Cum programa que leia um número inteiro e escreva o seu próximo e o seu anterior.

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("=-=-=-=-=-=-=-=-=-=- ANTECESSOR E SUCESSOR -=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite um número inteiro: ");
    fflush(stdin);
    scanf("%i", &n);

    printf("\nAnalisando o número %i, seu antecessor é %i e seu sucessor é %i.\n\n", n, (n-1), (n+1));

}
