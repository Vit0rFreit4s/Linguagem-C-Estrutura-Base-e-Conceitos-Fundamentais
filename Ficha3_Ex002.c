#include <stdio.h>
#include <locale.h>


/*Ler dois n�meros inteiros e escrever a sa�da apresentada a seguir.
Note que o programa deve mostrar a  opera��o,  a  f�rmula  matem�tica
apresentando  os  n�meros  digitados  e  o  resultado  da  opera��o.
Como exemplo, vamos supor que os n�meros introduzidos s�o:

7 e 4:
Soma: 7 + 4 = 11
Subtra��o: 7 �4 = 3
Multiplica��o: 7 x 4 = 28
Dividendo: 7
Divisor: 4
Quociente: 1
Resto: 3
*/


  void main(){
    setlocale(LC_ALL,"Portuguese");

   int n1, n2;

   printf("----- REALIZANDO OPERA��ES -----\n");
   printf("\nDigite o primeiro n�mero: ");
   fflush(stdin);
   scanf("%i", &n1);
   printf("Digite o segundo n�mero: ");
   fflush(stdin);
   scanf("%i", &n2);



   printf("\nOs valores analisados para os n�meros %i e %i s�o: \n\n", n1, n2);
   printf("Soma:\t\t%i + %i = %i", n1, n2, n1+n2);
   printf("\nSubtra��o:\t%i - %i = %i", n1, n2, n1-n2);
   printf("\nMultiplica��o:\t%i * %i = %i", n1, n2, n1*n2);
   printf("\nDividendo:\t%i", n1);
   printf("\nDivisor:\t%i", n2);
   printf("\nQuociente:\t%i", n1/n2);
   printf("\nResto:\t\t%i\n\n", n1%n2);
  }
