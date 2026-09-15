#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 
#include "pilha.h"

/*
                                             <> -- chama arquivos onde o programa esta instalado
                                             "" -- chama arquivos no diretorio do projeto
*/



int fatorial(int num){
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

  printf("Factoria de: %d é %d\n\n", valor, fatorial(valor));


    return 0;
}
