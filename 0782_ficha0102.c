#include <stdio.h>
#include <stdlib.h>

/* 
Exerc�cio 2
Pretende-se determinar a classifica��o final de um aluno sabendo que a avalia��o consiste 
em 2 testes e um trabalho. Para a determina��o da m�dia sabe-se que cada teste tem um peso 
de 35% e o trabalho um peso de 30%.
*/

main() {
	float teste1=0,teste2=0,trab=0,media=0;
	
	printf("Digite a nota do 1. teste:");
	scanf("%f",&teste1);
	printf("Digite a nota do 2. teste:");
	scanf("%f",&teste2);
	printf("Digite a nota do trabalho:");
	scanf("%f",&trab);
	
	media=((teste1*0.35)+(teste2*0.35)+(trab*0.30));
	
	printf("A media e %.2f",media);
		
}
