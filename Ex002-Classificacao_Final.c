#include <stdio.h>
#include <locale.h>

/*Ex002 - Pretende-se determinar a classifica��o final de um aluno sabendo
que a avalia��o consiste em 2 testes e um trabalho. Para a determina��o da
m�dia sabe-se que cada teste tem um peso de 35% e o trabalho um peso de 30%.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float teste1, teste2, trab;

    printf("=-=-=-=-=- CLASSIFICA��O FINAL -=-=-=-=-=\n");
    printf("Digite a nota do primeiro teste: ");
    fflush(stdin);
    scanf("%f", &teste1);
    printf("Digite a nota do segundo teste: ");
    fflush(stdin);
    scanf("%f", &teste2);
    printf("Digite a nota do trabalho: ");
    fflush(stdin);
    scanf("%f", &trab);

    printf("\nCalculando a m�dia final............. \n\n");
    printf("A m�dia final desse aluno foi %.2f.\n\n", (teste1*0.35 + teste2*0.35 + trab*0.30));

}
