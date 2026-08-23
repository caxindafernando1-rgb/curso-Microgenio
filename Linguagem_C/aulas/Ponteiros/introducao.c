#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int n = 10;
    
   int *p;

   p = &n;//p recebe o endereço n
   printf("Valor de num: %d\n ", n);
   printf("Endereço de num: %p\n", &n);
   printf("Valor de p: %p\n", p);
   printf("endereço da variavel p: %p\n", &p);
   printf("volor apontado por p: %d\n", *p);//p guarda o enereço de memoria e nesta regiao de memoria tem o valor 10

    return 0;
}
