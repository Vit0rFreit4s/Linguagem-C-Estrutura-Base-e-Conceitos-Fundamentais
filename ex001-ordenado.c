#include <stdio.h>
#include <locale.h>

//EX001 - Ordenado

void main(){
    setlocale(LC_ALL, "Portuguese");
    float horas_trabalhadas, ordenado;

    fflush(stdin);
    printf("Digite quantas horas voc� trabalhou? ");
    scanf("%f", &horas_trabalhadas);
    ordenado = (horas_trabalhadas * 20);
    printf("Com %.2f horas trabalhdas voc� receber� $%.2f.\n\n", horas_trabalhadas, ordenado);
}
