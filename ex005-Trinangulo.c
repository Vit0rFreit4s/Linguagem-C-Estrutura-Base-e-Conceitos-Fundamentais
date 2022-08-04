#include <stdio.h>
#include <locale.h>

//EX - Área do triângulo

void main(){
    setlocale(LC_ALL, "Portuguese");

   float area, base, altura;

    printf("=-=-=-=-=-=-=-=- PROGRAMA PARA CALCULAR A ÁREA DE UM TRIÂNGULO -=-=-=-=-=-=-=-=\n\n");// Enunciado
    fflush(stdin); //comando para limpar memória
    printf("Digite a base do triângulo: \(cm\)");
    scanf("%f", &base);
    fflush(stdin);
    printf("Digite a altura do triângulo: \(cm\)");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("\n\n------------------------------ CALCULANDO ------------------------------\n\n");
    printf("Para um triângulo com base %.2f e altura %.2f, sua área será %.2f cm².\n\n", base, altura, area);

}
