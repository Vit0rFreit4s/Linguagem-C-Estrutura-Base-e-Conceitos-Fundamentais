#include <stdio.h>
#include <locale.h>

//EX001 - Ler o valor do raio de um círculo e calculara área desse círculo.A=PI x raio^2

void main(){
    setlocale(LC_ALL, "Portuguese");

    float raio = 0;
    const double Pi = 3.14159265358979323846;


    printf("--------------------- Calculando o raio de um circulo --------------------------\n");
    printf("Insira o raio desse círculo: [cm]");
    fflush(stdin);
    scanf("%f", &raio);

    printf("\n---------------------- Analisando... -----------------------------\n");
    printf("A área desse cículo é de %.2f cm.\n\n", (Pi * (raio * raio)));


}
