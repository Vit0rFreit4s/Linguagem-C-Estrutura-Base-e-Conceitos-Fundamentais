#include <stdio.h>
#include <locale.h>

/*EX001 - Ler o valor do raio de um c�rculo e calcular o per�metro desse c�rculo.
A=2 x PI X raio*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float raio = 0;
    const double Pi = 3.14159265358979323846;

    printf("------------------ PER�METRO DE UM C�RCULO ----------------------\n");
    printf("Digite o raio do c�culo: [cm] ");
    fflush(stdin);
    scanf("%f", &raio);

    printf("------------------- CALCULANDO ---------------------\n");
    printf("O valor do per�metro do c�culo � %.2f cm.\n\n", (2*Pi*raio));
}
