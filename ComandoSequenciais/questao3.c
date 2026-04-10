
/*

Questão 3. Fazer um algoritmo que obtenha dois números inteiros, x e y, mostre o quociente e
o resto da divião inteira entre eles.

*/

#include <stdio.h>

int main(){

    int x, y, quociente, resto;

    printf("Digite um valor:");
    scanf("%d", &x);
    printf("Digite outro valor:");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y; 

    
    printf("Quociente: /%d", quociente);
    printf("\nResto: %d", resto);

    return 0 ; 
}