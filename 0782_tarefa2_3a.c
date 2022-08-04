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
	float brancos=0, nulos=0, validos=0;

	printf("Digite o número de votos em branco:");
	scanf("%f",&brancos);
	printf("\nDigite o número de votos nulos:");
	scanf("%f",&nulos);	
	printf("\nDigite o número de votos válidos:");
	scanf("%f",&validos);	

	// apresentar a percentagem dos votos
	printf("A percentagem dos votos brancos é %.2f %%",(brancos/(brancos+nulos+validos)*100));
	printf("\nA percentagem dos votos nulos é %.2f %%",(nulos/(brancos+nulos+validos)*100));
	printf("\nA percentagem dos votos válidos é %.2f %%",(validos/(brancos+nulos+validos)*100));
	printf("\nO números de eleitores foi %.0f",(brancos+nulos+validos));
}




