#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>




void MaiorMenor(int *vet, int tam, int *maior, int *menor){

    *maior = *vet;
    *menor = *vet;

   for (int i = 0; i < tam; i++){
        if(*(vet + i) > *maior )
            *maior = *(vet + i);
        if(  *(vet + i) < *menor)
            *menor = *(vet + i);
    }
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int vet[] = {1, 3, 4, 5, 6, 7, 8, 15, 10}; 
    int maior, menor; 
    int tam = sizeof(vet) / sizeof(vet[0]); // Calcula o tamanho do vetor e atribui a variavel tam;

   
    MaiorMenor(vet, tam,  &maior,  &menor);

    printf("valores do vetor: ");     
    for (int i = 0; i < tam; i++){
        printf("%d ", vet[i]);}
       
    printf("\nMaior: %d\n", maior);
    printf("Menor: %d", menor);
   

 return 0;
}
