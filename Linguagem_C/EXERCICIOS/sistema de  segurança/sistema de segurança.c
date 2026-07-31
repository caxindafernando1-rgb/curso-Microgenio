#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int i, x, y;
      
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf(" %d", &y);

    for(i = 1;  i <= y; i++){
        printf("%1d ", i);
        if (i % x == 0)
            printf("\n");
    }

}