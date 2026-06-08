#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
setlocale(LC_ALL, "Portuguese_brazil");

    int opcao;
    int numSecreto;
    int palpite;

    printf("\n*** Menu Principal ***\n");
    printf("Selecione uma opção:\n\n");
    printf("1. Iniciar Jogo     "); printf("2. Ver Regras       "); printf("3. Sair\n\n");

    printf("Escolha uma opção:\n");
    scanf("%d",&opcao);
    

    switch (opcao){
        case 1:
            printf("\nIniciando o Jogo...\n\n");
            srand(time (0));
            numSecreto = rand() % 10;

            printf("Digite um número de 0 a 9\n");
            scanf("%d", &palpite);
            if (numSecreto == palpite){
                printf("Parabéns, você acertou!!!\n");
            } else {
                printf("Que pena! Você errou!!\n\n");
            }


            break;
        case 2:
            printf("\n***Regras do Jogo***\n");
            printf("1. Regra 1.\n");
            printf("2. Regra 2.\n");
            printf("3. Regra 3.\n");
            break;
        case 3:
            printf("\nSaindo...\n");
            break;
        default:
            printf("Comando inválido.\n");
    }

return 0;
}