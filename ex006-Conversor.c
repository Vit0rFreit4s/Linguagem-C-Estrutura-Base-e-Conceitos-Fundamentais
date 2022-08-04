#include <stdio.h>
#include <locale.h>

//EX006 - Conversor de polegadas para milímetros

void main(){
    setlocale(LC_ALL, "Portuguese");

    float pol; //Declaração de variáveis

    printf("\n=-=-=-=-=-=-=-=-=-=- CONVERSOR DE MEDIDAS =-=-=-=-=-=-=-=-=-=-\n\n");
    printf("Digite o valor que pretende converter: (em polegadas) ");
    fflush(stdin); //Comando para limpar o buffer
    scanf("%f", &pol);

    printf("\n=-=-=-=-=-=-=-=-=-=- CALCULANDO =-=-=-=-=-=-=-=-=-=-\n\n");
    printf("O valor de %.2f polegadas em milímetros é de %.2fmm.", pol, (pol*25.4)); //(pol*25.4) é a formula para a conversão de polgadas em mm
}
