#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  


                                          /*Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7*/
                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int l, c, tam = 7, matriz[tam][tam];

     for ( l = 0; l <  tam ; l++){
        for ( c = 0; c < tam; c++){
           matriz[l][c] = rand() % 100;
        }
    }

     printf("\n\nMatriz Diagonal: \n");
    for (l = 0; l < tam ; l++){
      for ( c = 0; c < tam; c++){
            printf("%3d ", matriz[l][c]);
      }
      printf("\n");
    }

     printf("\n\nMatriz Diagonal: \n");
    for (l = 0; l < tam ; l++){
      for ( c = 0; c < tam; c++){
            if( l == c )
                  printf("%3d ", matriz[l][c]);
            else
                  printf("   ");
    }
    printf("\n");
}

      
 return 0;
}
