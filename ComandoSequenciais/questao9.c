#include <stdio.h>

int main(){
    
    int A, B, auxiliar;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &A);
    printf("Digite o segundo valor: \n");
    scanf("%d", &B);

    auxiliar = A;
    A = B;
    B = auxiliar;

    printf("A = %d\n", A);
    printf("B = %d\n", B);
        
    return 0;
}