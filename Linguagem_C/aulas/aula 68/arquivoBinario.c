#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                                     fread
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

void ler(char arq[]){
  FILE *pasta = fopen(arq, "rb");
  Contatos c;

  if (pasta){
    while (!feof(pasta)){
      if(fread(&c, sizeof(Contatos), 1, pasta))//'fread' recebe o endereço da variavel struct, o tamanho dela, quantas são, e coloca no arquivo binario
        printf("Nome: %s\nData de nascimento: %02d/%02d/%4d\n\n", c.nome, c.dia, c.mes, c.ano);
    }
    fclose(pasta);
  }
  else
    printf("ERRO!\nFalha ao ler o arquivo");
  
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char arquivo[] = {"arquivo.Bin"};
  
  escrever(arquivo);
  ler(arquivo);


   return 0;
}
