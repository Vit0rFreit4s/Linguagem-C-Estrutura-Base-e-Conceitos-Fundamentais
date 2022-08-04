#include <stdio.h>
#include <locale.h>
#include <time.h>

/*Desenvolva  um  programa  que  receba  o  ano  de  nascimento
  de  uma  pessoa  e  o  ano  atual.  Calcule  e mostre:

  a) A idade dessa pessoa em anos;
  b) A idade dessa pessoa em meses;
  c) A idade dessa pessoa em dias;
  d) A idade dessa pessoa em semanas.*/

  void main(){
    setlocale(LC_ALL,"Portuguese");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data ->tm_year+1900;
    int nasc;

    printf("=-=-=-=-=-=-=-=-=-=- Conversor de Idade -=-=-=-=-=-=-=-=-=-=\n");
    printf("\nEm que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &nasc);

    printf("\n---------- CALCULANDO... ----------\n\n");
    printf("Sua idade em anos � %i.\nSua idade em meses � %i.\nSua idade em semanas � %i.\nSua idade em dias � %i.\n\n", ano-nasc, (ano-nasc)*12, (ano-nasc)*52, (ano-nasc)*365);
    printf("-------------------------------------\n\n");
  }
