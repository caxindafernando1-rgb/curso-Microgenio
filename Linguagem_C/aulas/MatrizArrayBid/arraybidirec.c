#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, num[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for ( l = 0; l < 3; l++){
      for (c = 0; c < 3; c++)
            printf("%d ", num[l][c]);
      printf("\n");
        }
    

}