#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                         PUSH / POP
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
  struct  no *proximo;
}No;

Pessoa ler_pessoa(){
   Pessoa p;
   printf("\nNome: ");
   scanf(" %49[^\n]", p.nome);
   getchar();
   printf("\nEscreva a sua data de nascimento\n");
   printf("Dia: ");
   scanf(" %d", &p.data.dia);
   printf("Mês: ");
   scanf(" %d", &p.data.mes);
   printf("Ano: ");
   scanf(" %d", &p.data.ano);
   getchar();

   return p;
}

void imprimir_pessoa(Pessoa p){
   printf("Nome: %s\nNasceu aos: %02d/%02d/%4d\n\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

No* empilhar(No *topo){
   No *novo = malloc(sizeof(No));
   
   if (novo){
      novo->p = ler_pessoa();
      novo->proximo = topo;
      return novo;
   }
   else
      printf("Erro!\n Falha ao empilhar");
      return NULL;
   }

No* desempilhar(No **topo){
   if(*topo != NULL){
      No *remover = *topo;
      *topo = remover->proximo;
      return(remover);
      free(remover);
   }
   else
      printf("ERRO!\nFalha ao Desempilhar");
}

void imprimir(No *topo){
   printf("\n--------------------------------------\n");
   while(topo){
      imprimir_pessoa(topo->p);
      topo = topo->proximo;
   }
   printf("\n--------------------------------------\n");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");


  No *remover, *topo = NULL;
  int opcao;

  do{
  printf("\n3 - Empilhar(PUSH)\n2 - Desempilhar(POP)\n1 - Emprimir\n0 - Sair\n\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch (opcao){
  case 0:
      break;
  case 1:
      imprimir(topo);
      break;
   case 2:
      remover = desempilhar(&topo);
      if (remover){
         printf("Topo da pilha removido com sucesso!\n");
         imprimir_pessoa(remover->p);
         free(remover);
      }
      else
         printf("ERRO!\nFalha ao remover o topo da pilha");
      break;
   case 3:
      topo = empilhar(topo);
      break;        
  default:
      printf("ERRO!\nOpção invalida\n\n");
   break;
  }
}while(opcao != 0);

    return 0;
}
