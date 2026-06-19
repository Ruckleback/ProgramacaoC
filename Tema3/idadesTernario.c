#include <stdio.h>
#include <locale.h>

int main (){
 setlocale(LC_ALL, "Portuguese_brazil");

    int idade = 20;
    int resultado;

resultado = idade >=18 ? 1 : 0;

    if (resultado == 1){
       printf("Você é maior de idade!\n");
    }else {
        printf("Você é menor de idade!\n");

    }

}