#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 

void trocar(int v[], int inicio, int fim){
      int aux;
      if(inicio < fim){
            aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
            trocar(v, inicio + 1, fim - 1);
      }
}

void imprimir(int v[], int tam){
      if(tam == 1)
            printf("%d ", v[tam - 1]);
      else
            imprimir(v, tam - 1);
            printf("%d ", v[tam - 1]);
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
       
    int vet[9] = {56781, 2, 356, 54, 65, 566, 7, 86, 9};


    printf("\n");
    imprimir(vet, 9);
    trocar(vet, 0, 8);
    printf("\n");
    imprimir(vet, 9);
    printf("\n");
    printf("\n");
   
 return 0;
}
