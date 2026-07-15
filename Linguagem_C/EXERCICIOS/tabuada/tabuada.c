#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int a , b, c;
   printf("Digite um número: ");
   scanf("%d", &b);

   for (a = 0; a <= 10; a++){
      c = a * b;
      printf("%d x %d = %d\n", b, a, c);
   }


}