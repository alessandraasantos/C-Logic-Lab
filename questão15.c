/*
Questao 15
Descrição: Faça um algoritmo que recebe um valor e mostra se o mesmo e par ou impar.
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("O numero é par");
    else
        printf("O numero é impar");

    return 0;
}
