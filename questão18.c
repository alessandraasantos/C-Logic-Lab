/*Questao 18. ˜ As mac¸as custam R$0.30 cada, se forem compradas menos do que uma duzia, e ´
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o numero de mac¸as ´
compradas, calcule e mostre o valor total da compra. */


#include <stdio.h>

float valorTotal(float *a, float *b){
    float resultado = *a**b;
    return resultado;
}

int main()
{
    float x, y;
    scanf("%d", &x);
    
    if (x < 12)
        y = 0.30;
    else
        y = 0.25;
        
    printf("O valor total:%.2f\n", valorTotal(&x, &y));
    
        

    return 0;
}
