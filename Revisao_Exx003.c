#include <stdio.h>
#include <locale.h>

/*EX003 - Uma empresa contrata um colaborador a 100 € por dia.
Crie um programa que solicite o número de dias trabalhados e
imprima a quantia líquida que deverá ser paga, sabendo-se que
são descontados 8% para pagamento de impostos e taxas devidas.*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int dias_trabalhados = 0;
    const int Valor_dia = 100;
    const float Taxas = 0.08;

    printf("---------------- Calcudaora de salários -------------------\n");
    printf("Quantos dias você trabalhou? ");
    fflush(stdin);
    scanf("%i", &dias_trabalhados);

    printf("\n--------------- Analisando valores...... --------------------\n\n");
    printf("Sabendo que o valor pago por dia são de %i euros.\nE que terá um desconto de %.0f%%.\nO seu salário líquido será de %.2f euros.\n\n"
           , Valor_dia, (Taxas*100), (Valor_dia*dias_trabalhados-((Valor_dia*dias_trabalhados)*Taxas)));
}
