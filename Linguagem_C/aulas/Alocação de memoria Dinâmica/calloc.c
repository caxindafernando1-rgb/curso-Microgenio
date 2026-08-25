#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>

/*
                                                                        Alocação dinâmica de memória com a função CALLOC.
                                                                  Retorna um ponteiro para a região de moméria alocada ou NULL.
*/

int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");


   int *x;

   x = calloc( 1, sizeof(int));//recebe a quantida de elementos e de bytes que quero alocar 

   if(x){//é o mesmo que:if(x != NULL)
      printf("\n\nMemoria atribuida com sucesso!!\n");
      printf("valor de x: %d\n", *x);
      *x = 50;
      printf("valor atrubuido a x: %d\n", *x);
   } 
   else
      printf("ERRO!\nValor não atribuido.\n\n");


   return 0;
}
