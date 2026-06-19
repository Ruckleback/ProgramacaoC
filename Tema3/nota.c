#include <stdio.h>
#include <locale.h>

int main (){
 setlocale(LC_ALL, "Portuguese_brazil");

 int nota;

 printf("Digite sua nota:\n");
 scanf("%d", &nota);

 if (nota >= 90){
    printf("You got an A.\n");
} else if (nota >=80){
    printf("You got a B.\n");
} else if (nota >=70){
    printf("You got a C.\n");
} else if (nota >=60){
    printf("You got a D.\n");
} else {
    printf("You got an F!\n");
}

return 0;
}