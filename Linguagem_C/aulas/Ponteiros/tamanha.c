#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

       
   int *p;


   printf("endereço da variavel p: %d\n", sizeof(p));
 

    return 0;
}
