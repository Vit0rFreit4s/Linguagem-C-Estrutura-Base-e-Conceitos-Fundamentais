#include <stdio.h>
#include <locale.h>

//EX001 - Ordenado

void main(){
    setlocale(LC_ALL, "Portuguese");
    float horas_trabalhadas, ordenado;

    fflush(stdin);
    printf("Digite quantas horas você trabalhou? ");
    scanf("%f", &horas_trabalhadas);
    ordenado = (horas_trabalhadas * 20);
    printf("Com %.2f horas trabalhdas você receberá $%.2f.\n\n", horas_trabalhadas, ordenado);
}
