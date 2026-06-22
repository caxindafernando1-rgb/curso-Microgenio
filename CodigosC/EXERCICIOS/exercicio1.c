#include <stdio.h>
#include <locale.h>
#include <windows.h> // Abre os comandos do terminal do Windows

int main() {
    // Estas 3 linhas são as únicas obrigatórias para corrigir os acentos
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int a, b;
   printf("Digite um valor para A: ");
   scanf("%d", &a);

   printf("Digite o valor de B: ");
   scanf(" %d", &b);

   printf("valor inicial de A: %d\n", a);
   printf("Valor inicia de B: %d\n\n", b);

   int c = a;
   int f = b;

   printf("Valor secundario de A: %d\n", f);
   printf("Valor secundario de B: %d\n\n\n", c);
    return 0;
}
