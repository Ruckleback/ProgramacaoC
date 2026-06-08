#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese_brazil");
    char Nome1;
    char Nome2;

    int idade1;
    int idade2;

    printf("Digite seu nome:\n");
    scanf("%s", &Nome1);
    printf("Digite sua idade:\n");
    scanf("%d", &idade1);

    printf("Digite o nome do seu amigo:\n");
    scanf("%s", &Nome2);
    printf("Digite a idade do seu amigo:\n");
    scanf("%d", &idade2);

    if (idade1 == idade2) {
        printf ("Vocês possuem a mesma idade.");};
      else if{ (idade1 > idade2)
            printf("Você é mais velho que seu amigo.")
        } 
        
        else{
            printf("Seu amigo é mais velho que você.")
        }
        

        };
return 0;
        


}