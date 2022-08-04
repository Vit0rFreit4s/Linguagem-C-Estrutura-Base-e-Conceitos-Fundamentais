#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 2
Implemente um programa que leia quantos minutos por dia um aluno pode estudar. 
Calcule e escreva ao final de 90 dias quanto tempo em horas ele estudou.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	int minutos=0;
	float horas90=0;
	printf("Quantos minutos estuda por dia?");
	scanf("%i",&minutos);
	horas90=(minutos*90/60);
	printf("Ao fim de 90 dias o aluno estuda %.2f horas.",horas90);
}
