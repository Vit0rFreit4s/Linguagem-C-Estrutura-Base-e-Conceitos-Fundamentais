#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 1
Crie um programa em C que leia dois valores para as vari�veis A e B. Efetue a troca dos valores, 
para que a vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B passe a ter o valor da vari�vel A. 
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
	printf("O novo valor de A � %i",A);
	printf("\nO novo valor de B � %i",B);
}
