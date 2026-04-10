#include <stdio.h>

int main()
{
    floatvalor_compra, valor_pago, troco;
    int cedulas[6] = {100, 50, 20, 10, 5, 2};
    float moedas[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    

    printf("Digite o valor da compra: ");
    scanf("%d", &valor_compra);

    printf("Digite o valor pago pelo cliente: ");
    scanf("%d", &valor_pago);   


    if (valor_pago < valor_compra) {
        printf("Valor pago insuficiente.\n");
        return 0;
    } 
    else {
        troco = valor_pago - valor_compra;
        printf("Troco: %d\n", troco);

        printf("Cedulas:\n"); // Quantidade de cada cédula necessária para o troco
        for (int i = 0; i < 6; i++) {
            int qtdCedulas = troco / cedulas[i];
            if (qtdCedulas > 0) {
                printf("%d x R$ %d\n", qtdCedulas, cedulas[i]);
                troco -= qtdCedulas * cedulas[i];
            }
        }

        printf("Moedas:\n"); // Quantidade de cada moeda necessária para o troco
        for (int i = 0; i < 6; i++) {
            int qtdMoedas = troco / moedas[i];
            if (qtdMoedas > 0) {
                printf("%d x R$ %.2f\n", qtdMoedas, moedas[i]);
                troco -= qtdMoedas * moedas[i];
            }
        }
    }

    return 0;
}