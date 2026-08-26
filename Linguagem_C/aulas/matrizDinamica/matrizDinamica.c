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

   matr = malloc(4 * sizeof(int));

   for (int i = 0; i < 4; i++){
        matr[i] = malloc(3 * sizeof(int));
   }

   srand(time(NULL));

   for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matr[i][j] = rand() % 100;
        }
   }
   
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", matr[i][j]);
        }
        printf("\n");
   }


   return 0;
}
