#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                                 LESTA DE DASTAS DE ANIVERSARIO <>
*/
typedef struct{
  char nome[50];
  int dia, mes, ano;
}Contatos;

void escrever(char arq[]){
  FILE *pasta = fopen(arq, "ab");
  Contatos c;

  if (pasta){
    printf("Nome: ");
    scanf(" %49[^\n]", c.nome);
    printf("dia: ");
    scanf(" %d", &c.dia);
    getchar();
    printf("Mês: ");
    scanf("%d", &c.mes);
    getchar();
    printf("Ano: ");
    scanf("%d", &c.ano);
    fwrite(&c, sizeof(Contatos), 1, pasta);
    fclose(pasta);
  }
  else
    printf("ERRO!\nFalha ao criar arquivo");
  
}
int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char arquivo[] = {"arquivo.Bin"};
  
  escrever(arquivo);


   return 0;
}
