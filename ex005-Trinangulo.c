#include <stdio.h>
#include <locale.h>

//EX - �rea do tri�ngulo

void main(){
    setlocale(LC_ALL, "Portuguese");

   float area, base, altura;

    printf("=-=-=-=-=-=-=-=- PROGRAMA PARA CALCULAR A �REA DE UM TRI�NGULO -=-=-=-=-=-=-=-=\n\n");// Enunciado
    fflush(stdin); //comando para limpar mem�ria
    printf("Digite a base do tri�ngulo: \(cm\)");
    scanf("%f", &base);
    fflush(stdin);
    printf("Digite a altura do tri�ngulo: \(cm\)");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("\n\n------------------------------ CALCULANDO ------------------------------\n\n");
    printf("Para um tri�ngulo com base %.2f e altura %.2f, sua �rea ser� %.2f cm�.\n\n", base, altura, area);

}
