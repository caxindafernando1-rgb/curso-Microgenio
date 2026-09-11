#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h>
#include <stdlib.h> 


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

Pessoa ler_pessoa(){
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
   printf("Nome: %s\nData de nascimento: %02d/%02d/%4d \n\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
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

//Procedimento para desempilhar
No* desempilhar(No **topo){
   if(*topo != NULL){
      No *remover = *topo;
      *topo = remover->proximo;
      return remover;
   }
   else
      printf("ERRO!\nPilha vazia");
      return NULL;
}

void imprimir(No *topo){
   printf("\n---------------------PILHA----------------------------------------\n");
   while(topo){
      imprimir_pessoa(topo->p);
      topo = topo->proximo;
   }
    printf("\n-----------------------FIM DA PILHA------------------------------\n");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");


  No *remover, *topo = NULL;
  int opcao;
  
  do{
  printf("\n\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n\n");
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
      remover = desempilhar(&topo);
      if(remover){
         printf("\nTopo removido com sucesso!\n");
         imprimir_pessoa(remover->p);
         free(remover);
      }
      else
         printf("Topo vazio");
   break;
   case 3:
      imprimir(topo);
      break;
  default:
   printf("Erro!\nOpção invalida.\n\n");
   break;
  }
}while(opcao != 0);

    return 0;
}
