/*

Questâo 7. Fazer um algoritmo que calcule e mostre a área e o volume de um cilindro.
(A =2πr(h+r),V = πr2h.

*/

#include <stdio.h>

int main(){

    float Raio, Altura, Area, Volume, Pi = 3.14;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &Raio);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &Altura);
    
    Area = 2 * Pi * Raio * (Raio + Altura);
    Volume = Pi * Raio * Raio * Altura;
    
    printf("Area: %f", Area);
    printf("\nVolume: %f", Volume);


   return 0 ; 
}