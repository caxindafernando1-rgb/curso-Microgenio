#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  
                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int tam = 3, l, c, A[3][3], B[3][3], C[3][3];

     for ( l = 0; l <  tam ; l++){
        for ( c = 0; c < tam; c++){
           A[l][c] = rand() % 100;
           B[l][c] = rand() % 100;
           C[l][c] = A[l][c] + B[l][c];
        }
    }

     printf("Matriz A: \n");
    for (l = 0; l < tam ; l++){
      for ( c = 0; c < tam; c++){
            printf("%3d ", A[l][c]);
      }
      printf("\n");
    }
      
    printf("\n\n");

     printf("Matriz B: \n");
     for (l = 0; l < tam ; l++){
      for ( c = 0; c < tam; c++){
            printf("%3d ", B[l][c]);
      }
      printf("\n");
    }

      printf("\n\n");

     printf("Matriz C: \n");
     for (l = 0; l < tam ; l++){
      for ( c = 0; c < tam; c++){
            printf("%3d ", C[l][c]);
      }
      printf("\n");
    }
    
    printf("\n\n");


      
 return 0;
}
