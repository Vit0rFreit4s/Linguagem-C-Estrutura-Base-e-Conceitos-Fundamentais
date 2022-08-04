#include <stdio.h>
#include <stdlib.h>
/*
Exercício 1
Pretende-se calcular o montante total disponível ao fim de um ano de dois depósitos bancários feitos, 
no mesmo dia, em bancos diferentes, sabendo que o juro num banco é de 9% e no outro é de 7%. 
Teste para depósitos de 100,00 € e 50,00 € respectivamente. O valor obtido é de 162,50 €.
*/
main() {
	
	float depositoA=0, depositoB=0, juroA=0, juroB=0;
	float const pjA=0.09, pjB=0.07;
	
	printf("Digite o valor do deposito para o banco A:");
	scanf("%f",&depositoA);
	printf("Digite o valor do deposito para o banco B:");
	scanf("%f",&depositoB);
	
	juroA=(depositoA*pjA);
	juroB=(depositoB*pjB);
	
	printf("O valor obtido e %.2f",(depositoA+juroA+depositoB+juroB));
	
}
