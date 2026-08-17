#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>
#include <time.h>



//fibonacci:
long long int fibonacciRecursivo (int y){
      if(y == 1)
            return 0;
      else{
            if(y == 2)
                  return 1;
            else{
                  return fibonacciRecursivo(y - 1) + fibonacciRecursivo(y - 2);
            }
      }
}


long long int fibonacciInterativo(int x){

      long long int a = 0, b = 1, c;
      int i = 2;

      if(x == 1)
            return a;
      else{
            if(x == 2)
                  return b;
            else{
                  while(i < x){
                        c = a + b;
                        a = b;
                        b = c;
                        i++;
                  }
                  return c;
            }
      }
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int f;
     time_t tempoInicial, tempoFinal;

    
     printf("Digite o termo da fibonacci: ");
     scanf(" %d", &f);
    
     tempoInicial = time(NULL);
     printf("\nO %dº termo da fibonacci Interativa é: %lld\n", f,  fibonacciInterativo(f));
     tempoFinal = time(NULL);
     printf("O processamento da fibonacci interativa levou %.2f segundos\n\n", difftime(tempoFinal, tempoInicial));

     tempoInicial = time(NULL);
     printf("O %dº termo da fibonacci Recursiva é: %lld\n", f, fibonacciRecursivo(f));
     tempoFinal = time(NULL);
     printf("O processamento da fibonacci recursiva levou %.2f segundos\n\n", difftime(tempoFinal, tempoInicial));


 return 0;
}
