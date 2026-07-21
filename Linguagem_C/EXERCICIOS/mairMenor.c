#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i, valorInicial = 1, valorFinal = 1;

    for(i = 1; i <= 29; i++ ){
        valorInicial = valorInicial * 2;
        valorFinal += valorInicial;

    }

    printf("No final de 30 dias, você terá %d, Centavos \n\n", valorFinal);
    printf("Isso dá %.2f dolares ", valorFinal / 100.0);

}