#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i;
    long double inicio, somatorio;

    for (i = 2; i <= 63; i++){
      inicio *= 2;
      somatorio += inicio;
      __mingw_printf("%d Valor: %Lf", i, inicio);
    }

    __mingw_printf("Somatorio: %Lf", somatorio);
    return 0;
}
