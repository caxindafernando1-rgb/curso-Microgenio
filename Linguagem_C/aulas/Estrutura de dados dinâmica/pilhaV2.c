#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                         PUSH / POP 
                                                       segunda versão
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

typedef struct{
    No *topo;
    int tam;
}Pilha;

void criar_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
}

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

void empilhar(Pilha *p){
   No *novo = malloc(sizeof(No));
   
   if (novo){
      novo->p = ler_pessoa();
      novo->proximo = p->topo;
      p->topo = novo;
      p->tam++;
   }
   else
      printf("Erro!\n Falha ao empilhar");
   }

No* desempilhar(Pilha *p){
   if(p->topo){
      No *remover = p->topo;
      p->topo = remover->proximo;
      p->tam--;
      return remover;
   }
   else
      printf("ERRO!\nFalha ao Desempilhar");
      return NULL;
}

void imprimir(Pilha *p){
    No *aux = p->topo;

    printf("\n-----------------Pilha tam: %d----------------------\n", p->tam);
    while(aux){
      imprimir_pessoa(aux->p);
      aux = aux->proximo;
   }
   printf("\n---------------------------------------------------\n");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");


  No *remover = NULL;
  int opcao;
  Pilha p;

  criar_pilha(&p);

  do{
  printf("\n3 - Empilhar(PUSH)\n2 - Desempilhar(POP)\n1 - Emprimir\n0 - Sair\n\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch (opcao){
  case 0:
      break;
  case 1:
      imprimir(&p);
      break;
   case 2:
      remover = desempilhar(&p);
      if (remover){
         printf("Topo da pilha removido com sucesso!\n");
         imprimir_pessoa(remover->p);
         free(remover);
      }
      else
         printf("ERRO!\nFalha ao remover o topo da pilha");
      break;
   case 3:
        empilhar(&p);
        break;        
  default:
      printf("ERRO!\nOpção invalida\n\n");
   break;
  }
}while(opcao != 0);

    return 0;
}
