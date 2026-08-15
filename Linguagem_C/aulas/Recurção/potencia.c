#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 


int potencia(int x, int n){
      if(n == 0)
            return 1;
      else{
            return x * potencia(x, n - 1);
      }
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int x, n;

     printf("Digite o valor de X: ");
     scanf("%d", &x);

     printf("Digite o valor de N: ");
     scanf("%d", &n);
     
     printf("O valor de %d elevado a %d é: %d", x, n, potencia(x, n));

 return 0;
}
