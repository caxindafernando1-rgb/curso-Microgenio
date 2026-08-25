#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>


/*
                                                            Encontrar o maior e o menor elemento de um vetor com ponteiros
*/

void troca(int *a, int *b){
    float c;
     c = *a;
    *a = *b;
    *b = c;

}

   
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int valorA = 15;
    int valorB = 32;

    printf("Valor de A: %d Valor de B: %d\n", valorA, valorB);
    troca(&valorA, &valorB);
    printf("Valor de A: %d Valor de B: %d", valorA, valorB);

   

 return 0;
}
