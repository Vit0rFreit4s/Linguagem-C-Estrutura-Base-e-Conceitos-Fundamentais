#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 3
Uma instituição de ensino realizou uma pesquisa sobre os eleitores de um município que participaram 
numa dada eleição. Crie um programa que leia o total de votos brancos, nulos e válidos. Calcule e 
escreva a percentagem que cada um representa em relação ao total de eleitores.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	float brancos=0, nulos=0, validos=0, total=0;
	float percentagembrancos=0, percentagemnulos=0, percentagemvalidos=0;
	printf("Digite o número de votos em branco:");
	scanf("%f",&brancos);
	printf("\nDigite o número de votos nulos:");
	scanf("%f",&nulos);	
	printf("\nDigite o número de votos válidos:");
	scanf("%f",&validos);	
	total=(brancos+nulos+validos);
	// calcular a percentagem dos votos
	percentagembrancos=(brancos/total*100);
	percentagemnulos=(nulos/total*100);
	percentagemvalidos=(validos/total*100);
	// apresentar a percentagem dos votos
	printf("A percentagem dos votos brancos é %.2f %%",percentagembrancos);
	printf("\nA percentagem dos votos nulos é %.2f %%",percentagemnulos);
	printf("\nA percentagem dos votos válidos é %.2f %%",percentagemvalidos);
	printf("\nO números de eleitores foi %.0f",total);
}




