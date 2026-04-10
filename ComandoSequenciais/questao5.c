/*Questao 5. Fazer um algoritmo que converta centímetros para polegadas (obs.: 1pol = 2.54cm)*/

#include <stdio.h>

int main()
{
    int Polegadas;
    float Conversao;
    float Centimetros = 2.54;

    printf("Conversão de Polegadas para Cm:\nDigite um numero: ");
    scanf("%d", &Polegadas);
    
    Conversao = Polegadas * Centimetros;
    printf("O valor de %d polegadas em cm: %f", Polegadas, Conversao);

    return 0 ; 
}