/*Questao 19. ˜ Escreva um algoritmo que recebe tres valores inteiros e mostre o valor do maior ˆ
numero digitado pelo usu ´ ario. */


#include <stdio.h>

int main()
{
    int x, y, z, primeiro, segundo, terceiro;
    
    // Recebe os 3 numeros
   scanf("%d %d %d", &x, &y, &z);
   
   if (x > y || x > z){
        primeiro  = x;
        if (y > z){
            segundo = y;
            terceiro = z;
        }else{
            segundo = z;
            terceiro = y;
        }
   }
   if (y > x || y > z){
        primeiro  = y;
        if (x > z){
            segundo = x;
            terceiro = z;
        }else{
            segundo = z;
            terceiro = x;
        }
   }
   if (z > y || z > x){
        primeiro  = z;
        if (y > x){
            segundo = y;
            terceiro = x;
        }else{
            segundo = x;
            terceiro = y;
        }
   }
   
   
    
    printf("1°: %d\n2°: %d\n3°: %d\n", primeiro, segundo, terceiro);
        

    return 0;
}
