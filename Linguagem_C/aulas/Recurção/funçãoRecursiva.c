#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

//fatorial:
int Fatorial(int x){
      if(x == 0 || x == 1)
            return 1;
      else
            return x * Fatorial(x - 1);
            printf("%d", x);
}

//fibonacci:
int fibonacci (int y){
      if(y == 1)
            return 0;
      else{
            if(y == 2)
                  return 1;
            else{
                  return fibonacci(y - 1) + fibonacci (y - 2);
            }
      }
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int n, f;

     printf("Digite um valor para fatorizar: ");
     scanf("%d", &n);

     printf("Digite o termo da fibonacci: ");
     scanf(" %d", &f);
    
     printf("\nO fatorial de %d é %d \n", n, Fatorial(n));
     printf("O %dº termo da fibonacci é: %d\n\n", f, fibonacci(f));


 return 0;
}
