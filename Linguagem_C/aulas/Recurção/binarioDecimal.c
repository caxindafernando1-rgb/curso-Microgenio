#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 

void binario(int b){
      if(b == 0)
            printf("%d ", b);
      else{
            binario(b/2);
            printf("%d ", b % 2);
      }
}



int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int decimal;

    printf("\nDigite um número para ser convertido em binario: ");
    scanf("%d", &decimal);
   
    binario(decimal);

 return 0;
}
