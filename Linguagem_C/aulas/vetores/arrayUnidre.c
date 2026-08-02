#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int i, num[] = {2, 4, 15};
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    float num2[3] = {3.5, 56.7, 89.4};
    
    for(i = 0; i < 3; i++ )
      printf("%d ", num[i]);

    printf("\n\n");

   for(i = 0; i < 5; i++)
      printf("%c ", vogais[i]);
    
    printf("\n\n");

    for(i = 0; i < 3; i++)
      printf("%.2f ", num2[i]);
    printf("\n\n");
    

}