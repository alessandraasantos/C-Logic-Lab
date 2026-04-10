/*Quest˜ ao 12. Fazer um algoritmo que calcule a m´edia aritm´etica dos n´ umeros 7, 8 e 9 e a m´ edia
nos n´ umeros 4, 5 e 6. Mostre a soma das duas m´edias e a m´ edia das m´ edias.*/


#include <stdio.h>

int main()
{
    float media1 = (7 + 8 + 9) / 3; 
    float media2 = (4 + 5 + 6) / 3; 

    float mediaTotal = (media1 + media2) / 2;
    
    printf("%2.f", mediaTotal);
    return 0;
}
