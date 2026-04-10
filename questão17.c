/*Questao 17. ˜ Fac¸a um algoritmo que leia dois numeros e identifique se s ´ ao iguais ou diferentes. ˜
Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes, ˜
informe qual numero ´ e o maior, e uma mensagem que s ´ ao diferentes. */


#include <stdio.h>

int main()
{
    int x, y, big;
    scanf("%d %d", &x, &y);
    
    if (x == y)
        printf("São iguais\n");
    else{
        if (x > y)
            big = x;
        else
            big = y;
        
        printf("O numero maior é: %d\n", big);
    }
    
        

    return 0;
}
