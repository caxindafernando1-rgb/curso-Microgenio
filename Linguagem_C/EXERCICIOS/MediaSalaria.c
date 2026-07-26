#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    
    int x, y;


    do{
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf(" %d", &y);
    
    if ( x != 0  & y != 0 ){
      if( x > 0 & y  > 0 )
        printf("Primeito quadrante\n\n");
      else if(x < 0 & y > 0)
        printf("Segundo quadrante\n\n");
      else if(x < 0 & y < 0 )
        printf(" Terceiro quadrante\n\n");
      else
        printf("Quarto quadrante\n\n");
      }
    }while(x != 0  & y != 0);
        
}
