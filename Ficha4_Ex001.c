#include <stdio.h>
#include <locale.h>

//EX001 - Codifique em Cum programa que leia um n�mero inteiro e escreva o seu pr�ximo e o seu anterior.

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("=-=-=-=-=-=-=-=-=-=- ANTECESSOR E SUCESSOR -=-=-=-=-=-=-=-=-=-=\n");
    printf("Digite um n�mero inteiro: ");
    fflush(stdin);
    scanf("%i", &n);

    printf("\nAnalisando o n�mero %i, seu antecessor � %i e seu sucessor � %i.\n\n", n, (n-1), (n+1));

}
