#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i, j, n;

    printf("Digite o limite: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
      for(j = n - 1; j >= 1; j--)//se trocar '1' por 'i' inverte o sentido de descida da rampa de asteristico 
        printf(" ");
      for(j = 1; j <= i; j++)
        printf("*");
      printf("\n");
    }


return 0;
}