#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      int chave;

      printf("Digite sua senha: ");
      scanf("%d", &chave);

  while (chave != 1234)
  {
      printf("Senha invalida!\n Digite novamente: ");
      scanf(" %d", &chave);
  }

  printf("senha valida! Porta aberta");

}