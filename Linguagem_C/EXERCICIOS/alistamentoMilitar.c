#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i;
    long double inicio = 1, somatorio = 1;

    for (i = 2; i <= 63; i++){
      inicio *= 2;
      somatorio += inicio;
    __mingw_printf("%d Valor: %.2Lf\n", i, inicio);
    }

    __mingw_printf("\n\nSomatorio: %.2Lf", somatorio);
    
    return 0;
}
