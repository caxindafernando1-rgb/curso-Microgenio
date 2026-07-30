#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int i, j;

   for (i = 1; i <= 9;  i+=2){
      for (j = 6 + i; j >= 4 + i; j--)
         printf("i == %d --> j == %d \n", i, j);
      printf("\n");
      }
      
}