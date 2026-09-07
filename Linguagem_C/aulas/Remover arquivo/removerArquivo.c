#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                            REMOVER ARQUIVO
*/

int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  FILE *pasta = fopen("nome.txt", "w");
  char nome;

 
   if (pasta){
    printf("Nome: ");
    scanf("%c", &nome);
    while (nome != '\n'){
    fputc(nome, pasta);
    scanf("%c", &nome);
    }
    fclose(pasta);

    if(remove("nome.txt") == 0)
      printf("Arquivo removido com sucesso!");
    else
      printf("Falha ao remover o arquivo");
  }
  else
    printf("ERRO\nFalha ao criar arquivo");


    return 0;
}
