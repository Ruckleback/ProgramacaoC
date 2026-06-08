#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "Portuguese_Brazil");

    int escolhaJogador, escolhaCPU;
    srand(time(0));

    printf("***JO-KEN-PO***\n\n");
    printf("Escolha uma opção:\n");
    
    printf("1. Pedra        "); printf("2. Papel        "); printf("3. Tesoura\n\n");
    printf("Escolha:\n");
    scanf("%d", &escolhaJogador);

    escolhaCPU = rand() % 3 + 1;

    switch(escolhaJogador){
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Comando inválido!\n");
            break;
    }
    switch(escolhaCPU){
        case 1:
            printf("CPU: Pedra\n");
            break;
        case 2:
            printf("CPU: Papel\n ");
            break;
        case 3:
            printf("CPU: Tesoura\n");
            break;
        
    }

    if(escolhaCPU == escolhaJogador){
        printf("### Jogo Empatou!! ###\n\n");

    } else if ((escolhaJogador == 1) && (escolhaCPU == 3) ||
                (escolhaJogador == 2) && (escolhaCPU == 1) ||
                (escolhaJogador == 3) && (escolhaCPU == 2))
                {
                    printf("### Você venceu!! ###\n\n");
                } else {
                    printf("### Você Perdeu!! ###\n\n");
                }
return 0;
    }