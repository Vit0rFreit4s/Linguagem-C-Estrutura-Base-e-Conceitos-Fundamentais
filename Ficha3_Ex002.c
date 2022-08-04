#include <stdio.h>
#include <locale.h>


/*Ler dois números inteiros e escrever a saída apresentada a seguir.
Note que o programa deve mostrar a  operação,  a  fórmula  matemática
apresentando  os  números  digitados  e  o  resultado  da  operação.
Como exemplo, vamos supor que os números introduzidos são:

7 e 4:
Soma: 7 + 4 = 11
Subtração: 7 –4 = 3
Multiplicação: 7 x 4 = 28
Dividendo: 7
Divisor: 4
Quociente: 1
Resto: 3
*/


  void main(){
    setlocale(LC_ALL,"Portuguese");

   int n1, n2;

   printf("----- REALIZANDO OPERAÇÕES -----\n");
   printf("\nDigite o primeiro número: ");
   fflush(stdin);
   scanf("%i", &n1);
   printf("Digite o segundo número: ");
   fflush(stdin);
   scanf("%i", &n2);



   printf("\nOs valores analisados para os números %i e %i são: \n\n", n1, n2);
   printf("Soma:\t\t%i + %i = %i", n1, n2, n1+n2);
   printf("\nSubtração:\t%i - %i = %i", n1, n2, n1-n2);
   printf("\nMultiplicação:\t%i * %i = %i", n1, n2, n1*n2);
   printf("\nDividendo:\t%i", n1);
   printf("\nDivisor:\t%i", n2);
   printf("\nQuociente:\t%i", n1/n2);
   printf("\nResto:\t\t%i\n\n", n1%n2);
  }
