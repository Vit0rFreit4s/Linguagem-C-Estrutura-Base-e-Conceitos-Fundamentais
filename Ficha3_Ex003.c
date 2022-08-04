#include <stdio.h>
#include <locale.h>

/*Crie um programa que leia o valor da hora e do minuto atual e
calcule quantos minutos se passaram desde  as  zero  horas  do  dia.
O  algoritmo  deve  mostrar  a  saída  apresentada  a  seguir.
Como  exemplo, suponhamos que o utilizador tenha digitado:

15 na hora e 20 nos minutos A saída será:
AGORA SÃO 15:20 h.
Já se passaram 920 minutos desde o início do dia.*/

  void main(){
    setlocale(LC_ALL,"Portuguese");

    int horas, minutos;

    printf("=-=-=-=-=-=-=-=-=-=- QUANTOS MINUTOS JÁ SE PASSARAM? -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Quantas horas já se passaram desse dia? ");
    fflush(stdin);
    scanf("%i", &horas);
    printf("Quantas minutos já se passaram desse dia? ");
    fflush(stdin);
    scanf("%i", &minutos);

    printf("\n\t\tCALCULANDO..........\n\n");
    printf("Agora são %i:%i h.\nJá se passaram %i minutos desde o início do dia.", horas, minutos, ((horas*60)+minutos));
  }
