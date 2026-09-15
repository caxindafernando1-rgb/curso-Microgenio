#include <stdio.h>
#include <stdlib.h>




/*
                                                        arquivos .h
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