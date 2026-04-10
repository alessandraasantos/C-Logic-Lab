/*

Questão 6. Faça um algoritmo que recebe o valor do raio de um cíırculo e apresenta o valor da
area desse cíırculo.

*/

#include <stdio.h>

int main(){

    float Raio, Area, Pi = 3.14;
    printf("Digite o raio do circulo: ");
    scanf("%f", &Raio);
    
    Area = Pi * (Raio * Raio);
    printf("Area: %f", Area);

   return 0 ; 
}
