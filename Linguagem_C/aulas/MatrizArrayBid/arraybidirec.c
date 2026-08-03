#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, num[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9}, num2[3][3] = { 12, 22, 23, 24, 25, 26, 27, 28, 29}, num3[3][3];

    for ( l = 0; l < 3; l++){
      for ( c = 0; c < 3; c++){
            num3[l][c] = num2[l][c] * num2[l][c];
      }
    }
    

     printf("\n\n");
    for ( l = 0; l < 3; l++){
      for (c = 0; c < 3; c++)
            printf("%3d ", num3[l][c]);
      printf("\n");
        }

         for ( l = 0; l < 3; l++){
      for ( c = 0; c < 3; c++){
            num3[l][c] += 1;
      }
    }

         printf("\n\n");
    for ( l = 0; l < 3; l++){
      for (c = 0; c < 3; c++)
            printf("%3d ", num3[l][c]);
      printf("\n");
        }
}