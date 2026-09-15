#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                         PUSH  /  POP 
                                                           FACTORIAL
*/
typedef struct no{
    int valor;
    struct no *proximo;
}No;

No* empilhar(No *pilha, int num){
    No *novo = malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    }
    else
        printf("ERRO!\nFalha ao empilhar");
        return NULL;
}

No* desempilhar(No **pilha){
    No *remover = NULL;

    if(*pilha){
        remover  = *pilha;
        *pilha = remover->proximo;
    }
    else
        printf("ERRO!\nFalha ao desempilhar");
        return remover;
}

void imprimir(No *pilha){
    printf("\nPilha: \n");
    while (pilha){
        printf("\t== %d ==\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}

int fatorial(long long int num){
    No *remover, *pilha = NULL;

    while (num > 1){
        pilha = empilhar(pilha, num);
        num--;
    }
    imprimir(pilha);

    while (pilha){
        remover = desempilhar(&pilha);
        num = num * remover->valor;
        free(remover);
    }
    return num;
    
}
int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  int valor;

  printf("Digite um valor para factorizar: ");
  scanf("%d", &valor);

  printf("Factoria de: %d é %lld\n\n", valor, fatorial(valor));


    return 0;
}
