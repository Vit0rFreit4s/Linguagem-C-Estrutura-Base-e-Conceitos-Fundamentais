#include <stdio.h>
#include <locale.h>

//Calcular o sal�rio l�quido

void main(){
    setlocale(LC_ALL, "Portuguese");

    float salario_bruto, ss, irs, sindicato;

    printf(" \n=-=-=-=-=-=-=-=-=-=- PROGRAMA PARA C�CULO DO SAL�RIO L�QUIDO -=-=-=-=-=-=-=-=-=-=\n");
    printf(" Digite o sal�rio bruto mensal: ");
    fflush(stdin);
    scanf("%f", &salario_bruto);

    ss = (salario_bruto*0.115);
    irs = (salario_bruto*0.25);
    sindicato = (salario_bruto*0.005);

    printf(" \n----------------------------------------------------------------------------------\n");
    printf(" O valor do sal�rio bruto �: �%.2f.\n O valor do desconto para a Seguran�a Social �: �%.2f.\n", salario_bruto, ss);
    printf(" O valor do desconto para o IRS � �%.2f.\n O valor do desconto para o Sindicato �: �%.2f.\n", irs, sindicato);
    printf(" Dessa forma, o sal�rio l�quido que recebr� ser� de: �%.2f.\n\n", (salario_bruto-ss-irs-sindicato));


}
