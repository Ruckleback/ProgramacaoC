#include <stdio.h>
#include <locale.h>

int main (){
 setlocale(LC_ALL, "Portuguese_brazil");

    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Entre com a temperatura atual:  \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade atual:  \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque atual:  \n");
    scanf("%u", &estoque);

    printf("\n***Calculando***\n"); //quebra de linha


    if( temperatura > 30){
        printf("A temperatura EXCEDEU o limite seguro.\n");
    } else {
        printf("A temperatura está dentro dos parâmetros adequados.\n");
    }

    if( umidade > 50){
         printf("A umidade EXCEDEU o limite seguro.\n");
    } else {
        printf("A umidade está dentro dos parâmetros adequados.\n");
    }

    if (estoque < estoqueMin){
        printf("O estoque está abaixo dos níveis adequados.\n");
    } else {
        printf("O estoque está em nível adequado.\n");
    }

    printf("\n***Calculando***\n"); //quebra de linha

    if (temperatura >=20 && temperatura<=30 && umidade < 50 && estoque >1000){
        printf("Seu sistema está em condições ideais.\n");
    } else {
        printf("Seu sistema precisa de atenção URGENTE.\n");
    }

    

};