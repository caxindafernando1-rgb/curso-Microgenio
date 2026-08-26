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

    srand(time(NULL));

    matr = malloc(4 * sizeof(int));

    for (int i = 0; i < 4; i++){
        matr = malloc(3 * sizeof(int));
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
            **matr = rand() % 100;
        printf("\n");

    }


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ", **matr);
        }
    
    

   return 0;
}
