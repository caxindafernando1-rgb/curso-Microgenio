#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include  <stdlib.h>
#include <math.h>
#include <time.h>



int tam = 5; 

void impritMatr(int c[5][5]){
      int i, j;
      for ( i = 0; i < tam; i++){
            for ( j = 0; j < tam; j++){
                  printf("%2d ", c[i][j]);
            }
            printf("\n");
      }
       printf("\n");
}
      

int somarLinha(int matriz[][5], int l){

      int c, soma = 0;

      for ( c = 0; c < tam; c++){
            soma += matriz[l][c];
      }    

  return soma;
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int i, j, t;
    int matr[5][5];

    for ( i = 0; i < tam; i++){
      for ( j = 0; j < tam; j++){
            matr[i][j] = rand() % 10;
      }
      printf("\n");
    }
   
    impritMatr(matr);
    for ( t = 0; t < tam; t++){
      printf("Linha -- %2d Soma total -- %2d", t  + 1, somarLinha(matr, t));
      printf("\n");
    }
    printf("\n\n");
    
 
 return 0;
}
