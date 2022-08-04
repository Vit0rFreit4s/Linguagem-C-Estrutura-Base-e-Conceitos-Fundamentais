#include <stdio.h>
#include <locale.h>

//EX002 - Média Horária

void main(){
    setlocale(LC_ALL, "Portuguese");

    float media, espaco, tempo;

    printf("Quantos Kms pretende percorrer? ");
    scanf("%f", &espaco);
    printf("Em quanto tempo pretende percorrer esse trajeto? \(Horas\)");
    scanf("%f", &tempo);
    media = espaco/tempo;
    printf("------------------ ANALISANDO --------------------\n");
    printf("Para percorrer %.2fkms em %.2f horas você terá que estar à %.2fKm\\h.\n\n", espaco, tempo, media);
}
