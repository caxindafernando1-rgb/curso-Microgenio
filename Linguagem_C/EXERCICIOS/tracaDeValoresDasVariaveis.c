#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>


/*
                                                        Imprimir endereço e conteúdo de cada posição de um vetor 
*/

   
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(vet)/ sizeof(vet[0]);

    for (int i = 0; i < tam; i++){
        printf("Localização: %p  Contudo: %d\n", vet + i, *(vet + i));
    }
    

 return 0;
}
