#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 


int soma(int v[], int tam){
      if(tam == 0)
            return 0;
      else
            return v[tam - 1] + soma(v, tam - 1);
}


int maior(int v[], int tam, int indice){
      if(tam == 0)
            return v[indice];
      else{
            if(v[tam] > v[indice])
                  return maior(v, tam - 1, tam - 1);
            else
                  return maior(v, tam - 1, indice);
      }
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
       
    int vet[10] = {56781, 2, 356, 54, 65, 566, 7, 86, 9};

    printf("\nSoma: %d ", soma(vet, 3));
    printf("\nO maior número no vetor é: %d \n", maior(vet, 9, 0));


 return 0;
}
