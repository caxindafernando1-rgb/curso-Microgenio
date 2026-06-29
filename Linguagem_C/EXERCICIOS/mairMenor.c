#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float n1, n2, n3, maior, menor;
    printf("Digite 3 numeros para serem comparados: \n");
    printf("N1: ");
    scanf("%f", &n1);
    printf("\nN2: ");
    scanf(" %f", &n2);
    printf("\nN3: ");
    scanf(" %f", &n3);

    if (n1 > n2 && n1 > n3){
      maior = n1;
      }
      else( n1 < n2 && n1 < n3 );
        {menor = n1;} 
        
        
        if (n2 > n1 && n2 > n3){
      maior = n2;
      }
      else( n2 < n1 && n2 < n3 );
        {menor = n2;} 

        if (n3 > n2 && n3 > n2){
      maior = n3;
      }
      else( n3 < n2 && n3 < n1 );
        {menor = n3;} 
    printf("o menor número é %.1f", menor);
    printf("O mair numero é %.1f", maior);
}
