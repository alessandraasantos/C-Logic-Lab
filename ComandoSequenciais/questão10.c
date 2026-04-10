#include <stdio.h>

int main()
{
    int cedulas[] = {100, 50, 20, 10, 5, 2}; 
    int qtdNotas[6] = {0}; 
    int saque;
    
    printf("Digite valor de saque: ");
    scanf("%d", &saque);
    
    for(int i = 0; i < 6; i++){
       
        qtdNotas[i] = saque / cedulas[i];
        saque = saque % cedulas[i];
    }
    
    // Print final
    printf("\n--- Resultado do Saque ---\n");
    for(int j = 0; j < 6; j++){
        if(qtdNotas[j] > 0){ 
            printf("Quantidade de notas: %d | Valor da cédula: R$ %d,00\n", qtdNotas[j], cedulas[j]);
        }
    }
    
    // Se ainda sobrar valor, avisar o usuário
    if (saque > 0) {
        printf("Sobrou R$ %d que não pôde ser sacado (menor nota é R$ 2).\n", saque);
    }
    
    return 0;
}
