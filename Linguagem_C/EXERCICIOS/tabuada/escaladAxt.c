#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int a , c;
   
   for(c = 1; c <= 40; c++){
      for (a = 1; a <= c; a++)
         printf("*");
      printf("\n");
   }

}