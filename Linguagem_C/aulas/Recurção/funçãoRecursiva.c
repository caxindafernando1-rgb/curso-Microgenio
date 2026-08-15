#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>


int Fatorial(int x){
      if(x == 0 || x == 1)
            return 1;
      else
            return x * Fatorial(x - 1);
            printf("%d", x);
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int n;

     printf("Digite um valor: ");
     scanf("%d", &n);
      
     printf("O fatorial de %d é %d ", n, Fatorial(n));


 return 0;
}
