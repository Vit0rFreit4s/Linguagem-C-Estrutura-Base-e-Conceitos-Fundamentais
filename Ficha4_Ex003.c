#include <stdio.h>
#include <locale.h>

/*EX003 - Elabore  um  programa  que  leia  a  idade  do
pai  e  a  idade  do  filho.  Calcular  e  escrever a
diferen�a  de idade entre ambos.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade_pai, idade_filho;

    printf("=-=-=-=-=- DIFEREN�A DE IDADES -=-=-=-=-=\n\n");
    printf("Digite a idade do pai: ");
    fflush(stdin);
    scanf("%i", &idade_pai);
    printf("Digite a idade do filho: ");
    fflush(stdin);
    scanf("%i", &idade_filho);

    printf("\n-----------------------------------------\n");
    printf("Um pai com %i anos e um filho com %i anos, a diferen�a de idades entre eles ser� de %i anos.\n\n", idade_pai, idade_filho, (idade_pai-idade_filho));
}
