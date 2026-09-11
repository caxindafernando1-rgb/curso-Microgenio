#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                                        PUSH
*/

typedef struct{

   int dia, mes, ano;

}Data;


typedef struct{
   Data data;
   char nome[50];
}Pessoa;

typedef struct no{
   Pessoa p;
   struct no *proximo;
}No;

int ler_pessoa(){
   Pessoa p;
   printf("Nome: ");
   scanf(" %50[^\n]", p.nome);
   getchar();
   printf("Dia: ");
   scanf("%d", &p.data.dia);
   printf("Mês: ");
   scanf("%d", &p.data.mes);
   printf("Ano: ");
   scanf("%d", &p.data.ano);

   return p;
}

void imprimir_pessoa(Pessoa p){
   printf("Nome: %s\nData de nascimento: %02d/%02d/%4d \n\n")
}


//Procedimento para empilhar(push)
No* empilhar(No *topo){
   No *novo = malloc(sizeof(No));

   if (novo){
      novo->p = ler_pessoa();
      novo->proximo = topo;
      return novo;
   }
   else
      printf("ERRO!\nfalha ao empilhar");
   return NULL;
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");


  No *topo = NULL;
  int opcao;
  
  do{
  printf("0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n\n");
  scanf("%d", &opcao);
  getchar();

  switch (opcao){
   case 0:
   /* code */
   break;
  
   case 1:
      topo = empilhar(topo);
      break;
   case 2:
   /* code */
      break;
   case 3:
      /* code */
      break;
  
  default:
   printf("Erro!\nOpção invalida.\n\n");
   break;
  }
}while(opcao != 0);

    return 0;
}
