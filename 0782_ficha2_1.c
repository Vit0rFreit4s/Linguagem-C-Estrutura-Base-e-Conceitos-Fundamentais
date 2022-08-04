#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 1
Crie um programa em C que leia dois valores para as variáveis A e B. Efetue a troca dos valores, 
para que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. 
Apresente os valores trocados.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	int A=0,B=0,C=0;
	printf("Digite o valor de A:");
	scanf("%i",&A);
	printf("Digite o valor de B:");
	scanf("%i",&B);	
	C=A;A=B;B=C;
	printf("O novo valor de A é %i",A);
	printf("\nO novo valor de B é %i",B);
}
