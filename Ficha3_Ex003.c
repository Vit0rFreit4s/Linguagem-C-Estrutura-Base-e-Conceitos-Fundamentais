#include <stdio.h>
#include <locale.h>

/*Crie um programa que leia o valor da hora e do minuto atual e
calcule quantos minutos se passaram desde  as  zero  horas  do  dia.
O  algoritmo  deve  mostrar  a  sa�da  apresentada  a  seguir.
Como  exemplo, suponhamos que o utilizador tenha digitado:

15 na hora e 20 nos minutos A sa�da ser�:
AGORA S�O 15:20 h.
J� se passaram 920 minutos desde o in�cio do dia.*/

  void main(){
    setlocale(LC_ALL,"Portuguese");

    int horas, minutos;

    printf("=-=-=-=-=-=-=-=-=-=- QUANTOS MINUTOS J� SE PASSARAM? -=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Quantas horas j� se passaram desse dia? ");
    fflush(stdin);
    scanf("%i", &horas);
    printf("Quantas minutos j� se passaram desse dia? ");
    fflush(stdin);
    scanf("%i", &minutos);

    printf("\n\t\tCALCULANDO..........\n\n");
    printf("Agora s�o %i:%i h.\nJ� se passaram %i minutos desde o in�cio do dia.", horas, minutos, ((horas*60)+minutos));
  }
