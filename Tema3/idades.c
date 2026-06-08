#include <stdio.h>
#include <locale.h>

int main (){
 setlocale(LC_ALL, "Portuguese_brazil");

 int idade;

 printf("Digite sua idade:\n");
 scanf("%d", &idade);

 if (idade<=2){
    printf("Você é um Bebê!\n");
 } else if (idade > 2 && idade <= 12){
    printf("Você é uma criança!\n");
 } else if (idade > 12 && idade <= 18){
    printf("Você é um adolescente!\n");
 } else if (idade > 18 && idade < 60){
    printf("Você é um adulto!\n");
 } else {
    printf("Você é um idoso!\n");
 }
}