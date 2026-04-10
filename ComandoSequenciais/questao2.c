#include <stdio.h>

int main(){

    int Numero, Antercessor, Sucessor;

    printf("Digite o numero:");
    scanf("%d ", &Numero);
    
    if (Numero == 0){

        printf("Numero invalido");
        printf("Digite outro numero diferente de ""0""");
        scanf("%d ", Numero);
        
    }

    Antercessor = Numero - 1;
    Sucessor = Numero - 1;

    printf("O Antercessor: %d", Antercessor);
    printf("O Sucessor: %d", Sucessor);

    return 0 ; 
}