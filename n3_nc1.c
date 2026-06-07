#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");


    printf(" Tamanho de int: %u bytes\n", sizeof(int));
    printf(" Tamanho de Long int: %u bytes\n", sizeof(long int));
    printf(" Tamanho de Short int: %u bytes\n", sizeof(short int));
    printf(" Tamanho de Long Long int: %u bytes\n", sizeof(long long int));
    printf(" Tamanho de Double: %u bytes\n", sizeof(double));
    printf(" Tamanho de Long Double: %u bytes\n", sizeof(long double));



    unsigned int PIB = 35000000000;
    unsigned long int PIB2 = 35000000000;
    long int PIB3 = 35000000000;
    int PIB4 = 35000000000;

    unsigned double PIB5 = 35000000000;
    unsigned long double PIB6 = 35000000000;
    double PIB7 = 35000000000;
    long double PIB8 = 35000000000;

    printf("Valor do PIB: %u\n", PIB);
    printf("Valor do PIB2: %lu\n", PIB2);
    printf("Valor do PIB3: %ld\n", PIB3);
    printf("Valor do PIB4: %d\n", PIB4);
    printf("Valor do PIB5: %f\n", PIB5);
    printf("Valor do PIB6: %Lf\n", PIB6);
    printf("Valor do PIB7: %f\n", PIB7);
    printf("Valor do PIB8: %Lf\n", PIB8);
    

    return 0;
}
