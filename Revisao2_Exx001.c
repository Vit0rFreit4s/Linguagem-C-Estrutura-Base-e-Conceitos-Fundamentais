#include <stdio.h>
#include <locale.h>

/*EX001 - Ler o valor do raio de um círculo e calcular o perímetro desse círculo.
A=2 x PI X raio*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float raio = 0;
    const double Pi = 3.14159265358979323846;

    printf("------------------ PERÍMETRO DE UM CÍRCULO ----------------------\n");
    printf("Digite o raio do cículo: [cm] ");
    fflush(stdin);
    scanf("%f", &raio);

    printf("------------------- CALCULANDO ---------------------\n");
    printf("O valor do perímetro do cículo é %.2f cm.\n\n", (2*Pi*raio));
}
