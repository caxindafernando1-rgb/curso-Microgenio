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

//Soma:
int soma(int n){
      if(n == 0)
            return 0;
      else
            return n + soma(n - 1);
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int x, n, s;

      printf("Limite da soma: ");
     scanf("%d", &s);

     printf("Digite o valor de X: ");
     scanf("%d", &x);

     printf("Digite o valor de N: ");
     scanf("%d", &n);
     
     printf("\nO valor de %d elevado a %d é: %d\n", x, n, potencia(x, n));
     printf("A soma de 1 até %d é: %d\n\n", s, soma(s));

 return 0;
}
