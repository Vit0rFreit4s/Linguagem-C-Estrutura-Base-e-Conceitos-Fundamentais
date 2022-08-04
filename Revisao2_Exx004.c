#include <stdio.h>
#include <locale.h>

/*EX004 - Crie um programa para calcular a área de um quadrado. O tamanho do lado deve ser
informado pelo utilizador.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float lado = 0;

    printf("---------------- CACULADORA DA ÁREA DE UM QUADRADO -------------------\n\n");
    printf("Informe o lado do quadrado: [cm] ");
    fflush(stdin);
    scanf("%f", &lado);


    printf("\n---------------- CALCULANDO....... ------------------\n\n");
    printf("A área desse quadrado é de %.2f cm².\n\n", (lado*lado));

}
