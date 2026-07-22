#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int num, positivos = 0, negativos = 0;

    do{
      printf("Digite um número: ");
      scanf(" %d", &num);

      if(num > 0)
         positivos++;
      if(num < 0)
        negativos++;
    }while(num != 0);

    printf("Número de positivos: %d\nNúmero de Negativos: %d\n\n", positivos, negativos);
}
