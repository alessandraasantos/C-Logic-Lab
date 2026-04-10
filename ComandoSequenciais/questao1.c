// Receba dois valores inteiros e exiba a multiplicação entre eles

#include <stdio.h>

int main(){

    int x, y, resultado;

    printf("Digite o primeiro e o segundo que deseja multiplicar:");
    scanf("%d %d", &x, &y);
    
    int resultado = x * y;
    printf("Resultado: %d", resultado);

    return 0;
}