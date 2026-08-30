#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 

/*
                                                                                      Matriz Dinâmica
*/

int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");

   int **matr;

   matr = malloc(5 * sizeof(int));//Linhas

   for (int i = 0; i < 5; i++){
        matr[i] = malloc(3 * sizeof(int));//Colunas
   }

   srand(time(NULL));

   for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            *(*(matr + i) + j) = rand() % 100;//percorrer a matriz e preencher
            //matr[i][j] = rand() % 100;//percorrer a matriz e preencher
        }
   }

    printf("\n\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            printf("%2d ", *(*(matr + i) + j));//percorrer a matriz e imprimi-la
            //printf("%d ", matr[i][j]);//percorrer a matriz e imprimi-la
        }
        printf("\n\n");
   }
   printf("\n");

   return 0;
}
