#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 3
Uma institui��o de ensino realizou uma pesquisa sobre os eleitores de um munic�pio que participaram 
numa dada elei��o. Crie um programa que leia o total de votos brancos, nulos e v�lidos. Calcule e 
escreva a percentagem que cada um representa em rela��o ao total de eleitores.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	float brancos=0, nulos=0, validos=0;

	printf("Digite o n�mero de votos em branco:");
	scanf("%f",&brancos);
	printf("\nDigite o n�mero de votos nulos:");
	scanf("%f",&nulos);	
	printf("\nDigite o n�mero de votos v�lidos:");
	scanf("%f",&validos);	

	// apresentar a percentagem dos votos
	printf("A percentagem dos votos brancos � %.2f %%",(brancos/(brancos+nulos+validos)*100));
	printf("\nA percentagem dos votos nulos � %.2f %%",(nulos/(brancos+nulos+validos)*100));
	printf("\nA percentagem dos votos v�lidos � %.2f %%",(validos/(brancos+nulos+validos)*100));
	printf("\nO n�meros de eleitores foi %.0f",(brancos+nulos+validos));
}




