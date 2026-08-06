#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>

/*                                             Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7
                                          Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na 
tela.
*/
                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int l, c, taml = 5, tamc = 5, matriz[taml][tamc],   matriz2[tamc][taml];

     for ( l = 0; l <  taml ; l++){
        for ( c = 0; c < tamc; c++){
           matriz[l][c] = rand() % 100;
        }
    }

     printf("\n\nMatriz: \n");
    for (l = 0; l < taml ; l++){
      for ( c = 0; c < tamc; c++){
            printf("%3d ", matriz[l][c]);
      }
      printf("\n");
    }

   
    for (l = 0; l < taml ; l++){
      for ( c = 0; c < tamc; c++){
           matriz2[c][l] = matriz [l][c];
      }
    }
           

      printf("\n\nMatriz Invertida: \n");
    for (l = 0; l < taml ; l++){
      for ( c = 0; c < tamc; c++){
            printf("%3d ", matriz2[l][c]);
      }
      printf("\n");
    }


    printf("\n\nMatriz Diagonal: \n");
    for (l = 0; l < taml ; l++){
      for ( c = 0; c < tamc; c++){
            if(l == c)
                  printf("%3d ", matriz2[l][c]);
            else
                  printf("   ");
      }
      printf("\n");
    }

    
    printf("\n\nMatriz A Baixo da Diagonal: \n");
    for (l = 0; l < taml ; l++){
      for ( c = 0; c < tamc; c++){
            if(l > c)
                  printf("%3d ", matriz2[l][c]);
            else
                  printf("   ");
      }
      printf("\n");
    }






 return 0;
}
