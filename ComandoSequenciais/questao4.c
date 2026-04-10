/*
Questão 4. Fazer um algoritmo que calcule e mostre:
a) A soma entre dois n´ umeros
b) O produto entre eles e
c) O quociente entre eles.
*/

#include <stdio.h>

int main()
{

    int x, y, Soma, Produto, Quociente;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite segundo numero: ");
    scanf("%d", &y);

    Soma = x + y;
    Produto = x / y;
    Quociente = x % y; 

    printf("Soma: %d.\nProduto: %d.\nQuociente: %d.", Soma, Produto, Quociente);
    return 0;
}