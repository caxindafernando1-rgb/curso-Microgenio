#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float valorDolar, valorReal;

    printf("Quantos reais você quer converter em dolar: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / 5.30;

    printf(" %.2f reais são %.2f Dolares ", valorReal, valorDolar);

}
