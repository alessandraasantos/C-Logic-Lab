#include <stdio.h>

int main()
{
    
    float salario = 1.621, comissao = 0.15, totalVendas = 0, salarioFinal = 0, comissaoFinal = 0, total = 0;

    printf("Digite o total de vendas: ");
    scanf("%f", &totalVendas);

    comissaoFinal = comissao * totalVendas;
    salarioFinal = salario + comissaoFinal;

    printf("O salario final: %.2f", salarioFinal);

    return 0;
}

