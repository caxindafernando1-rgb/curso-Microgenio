#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

       
   char *p;
   int *p2;
   float *p3;


   printf("endereço da variavel p: %d\n", sizeof(p));
    printf("endereço da variavel p: %d\n", sizeof(p2));
     printf("endereço da variavel p: %d\n", sizeof(p3));
 

    return 0;
}
