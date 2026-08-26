#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 

/*
                                                                                      Matriz Dinâmica
*/

int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");

   char Nome[3][56];
   int Nota[3];

   for (int i = 0; i < 3; i++){   
        printf("Digite o nome e a nota do aluno %d", i);
        scanf("%c%d", &Nome[i], &Nota[i]);
   }
   
   printf("\n\n\tNome:  \tNota:\n");
   for (int i = 0; i < 3; i++){
    printf("\t%c ------ \t%d\n", Nome[i], Nota[i]);
   }
   
   


   return 0;
}
