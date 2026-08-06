#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  
                      /* Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int i, j, soma, matriz[5][7];

     for ( i = 0; i < 5; i++){
        for ( j = 0; j < 7; j++){
           matriz[i][j] = rand() % 100;
        }
    }


    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 7; j++){
            soma += matriz[i][j];
             printf("%7d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nSoma total: %d \n\n", soma);
    
 return 0;
}
