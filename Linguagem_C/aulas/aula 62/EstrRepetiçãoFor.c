#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i, j, n;

    printf("Digite o limite: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
      printf("%d "a);
    }
}