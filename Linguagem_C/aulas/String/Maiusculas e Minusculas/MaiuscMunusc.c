#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h> 


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    char lista[6][50];
    int i;

    for ( i = 0; i < 6; i++){
      printf("\n%d - Nome: ", i + 1);
      scanf("%50[^\n]", lista[i]);
      getchar();//Limpar o buffer de teclado
    }

    printf("\n\nLista Nominal: \n");
    for ( i = 0; i < 6; i++){
      printf("%d == %s \n", i + 1, lista[i]);
    }
    

 return 0;
}
