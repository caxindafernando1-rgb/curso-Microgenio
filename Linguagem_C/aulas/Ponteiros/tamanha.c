#include <stdio.h>
#include <locale.h>
#include <windows.h> 

int tam = 10;

void testar(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        vet[i] = vet[i] * 2;
    }
    printf("\n\n");
}


void imprimir(int vet[], int tam){
      for (int i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    
    int vet[10] = {12, 4, 16, 32, 7, 5, 17, 56, 45, 20};

    imprimir(vet, 10);
    testar(vet, 10);
    imprimir(vet, 10);

  

 
       
   

    return 0;
}
