#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int numPessoas;
    float dispTotal, gorjeta, quantPorPessa, valorTotal;

    printf("Valor da dispesa total: ");
    scanf("%f", &dispTotal);

    printf("Percentagem da Gorjeta: ");
    scanf("%f", &gorjeta);

    printf("Nº de pessoas: ");
    scanf("%d", &numPessoas);

    valorTotal = dispTotal * gorjeta/100 + dispTotal;
    quantPorPessa = valorTotal / numPessoas;

    printf("\n\n O valor total é: %.2f Kwanzas\n ", valorTotal);
    printf("Quantidade por Pessoa: %.2f Kwanzas\n", quantPorPessa);   
}
