#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    printf("\n\nOperador TÉRNARIO:\n" );
    a < 0 ? printf("%d É um numero negativo\n\n", a) : 
      a > 0 ? printf("%d é um número positivo\n\n", a) : printf("%d é igual a 0\n\n", a);
    /*
    printf("%d é um número Positivo ou igual a 0\n\n", a);
    
    printf("\n\n\nOperadores IF/ELSE: \n");
    if (a < 0){
      printf("%d É um numero negativo\n\n", a);
      }
    else{
      if (a > 0)
        printf("%d é um número positivo\n\n", a);
      else
        printf("%d é igual a 0\n\n", a);
   }
   printf("Continuação do programa...");
*/

}
