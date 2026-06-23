#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float dias, desconto, valorTotal;

    printf("Dias trabalhados: ");
    scanf(" %f", &dias);

    valorTotal = dias * 45;
    desconto = valorTotal  * 8/100 ;
    valorTotal = valorTotal - desconto;

    printf("\n\nVai receber: %.2f\n", valorTotal);
    printf("Desconto: %.2f", desconto);



}
