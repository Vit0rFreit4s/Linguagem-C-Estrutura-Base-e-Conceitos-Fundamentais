#include <stdio.h>
#include <locale.h>

//EX001 - Ler o valor do raio de um c�rculo e calculara �rea desse c�rculo.A=PI x raio^2

void main(){
    setlocale(LC_ALL, "Portuguese");

    float raio = 0;
    const double Pi = 3.14159265358979323846;


    printf("--------------------- Calculando o raio de um circulo --------------------------\n");
    printf("Insira o raio desse c�rculo: [cm]");
    fflush(stdin);
    scanf("%f", &raio);

    printf("\n---------------------- Analisando... -----------------------------\n");
    printf("A �rea desse c�culo � de %.2f cm.\n\n", (Pi * (raio * raio)));


}
