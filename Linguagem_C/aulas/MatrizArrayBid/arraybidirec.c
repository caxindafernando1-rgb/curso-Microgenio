#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, num[3][3];

    srand(time(NULL));

    for ( l = 0; l < 3; l++){
      for ( c = 0; c < 3; c++){
            num[l][c] = rand();
           
    }
 }
    
         printf("\n\n");
    for ( l = 0; l < 3; l++){
      for (c = 0; c < 3; c++)
            printf("%5d ", num[l][c]);
      printf("\n");
        }
}