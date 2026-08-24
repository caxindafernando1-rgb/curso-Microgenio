#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <string.h> 
#include <time.h> 

int tam = 10;

void preencherStr(int vet[], int tamanho){

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++){  
        *(vet + i) = 1 + rand() % 100; 
    }
}


void imprimir(int vet[], int tamanho){

    for (int i = 0; i < tamanho; i++){
        printf("%d ", &vet[i]);
    }
}

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int vetor[tam];

    preencherStr(vetor, tam);
    imprimir(vetor, tam);
   

    return 0;
}
