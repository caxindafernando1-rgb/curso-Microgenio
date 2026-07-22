#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i, divisores, valor = 8;

    do{
      divisores = 0;
      valor+= 2;
      for (i = 1; i <=  10; i++){
        if(valor % i == 0)
          divisores++;
      }
    }while(divisores != 10);

    printf("o valor é: %d", valor);
}
