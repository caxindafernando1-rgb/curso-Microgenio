#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int valor1, valor2;

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    while(valor1 <= 0){
      printf("Valor invalido!! digite um valor mair que 0\n");
      scanf(" %d", &valor1);
    }

    printf("%d guardado com sucesso!\n\n\n", valor1);


    do{
      printf("Digite um valor: ");
    scanf("%d", &valor2);
    }while( valor2 <= 0 );

    printf("%d guardado com sucesso", valor2);
}