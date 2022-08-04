#include <stdio.h>
#include <locale.h>

//Calcular o salário líquido

void main(){
    setlocale(LC_ALL, "Portuguese");

    float salario_bruto, ss, irs, sindicato;

    printf(" \n=-=-=-=-=-=-=-=-=-=- PROGRAMA PARA CÁCULO DO SALÁRIO LÍQUIDO -=-=-=-=-=-=-=-=-=-=\n");
    printf(" Digite o salário bruto mensal: ");
    fflush(stdin);
    scanf("%f", &salario_bruto);

    ss = (salario_bruto*0.115);
    irs = (salario_bruto*0.25);
    sindicato = (salario_bruto*0.005);

    printf(" \n----------------------------------------------------------------------------------\n");
    printf(" O valor do salário bruto é: £%.2f.\n O valor do desconto para a Segurança Social é: £%.2f.\n", salario_bruto, ss);
    printf(" O valor do desconto para o IRS é £%.2f.\n O valor do desconto para o Sindicato é: £%.2f.\n", irs, sindicato);
    printf(" Dessa forma, o salário líquido que recebrá será de: £%.2f.\n\n", (salario_bruto-ss-irs-sindicato));


}
