#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char ProdutoA[30] = "Produto A";
    char ProdutoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Infos dos produtos

    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", ProdutoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", ProdutoB, estoqueB, valorB);

    //Comparações dos estoques mínimos
    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;

    printf("O produto %s tem estoque mínimo %d\n",ProdutoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n",ProdutoB, resultadoB);

    //Comparação dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));






return 0;
}