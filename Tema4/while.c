#include <stdio.h>

int main() {

    int num;

    printf("Digite um número (negativo para sair):\n");
    scanf("%d", &num);
    
        while(num >= 0){

            printf ("Número incorreto.\n", num);
            printf("Digite um número (negativo para sair):\n");
            scanf("%d", &num);

    }
return 0;
}