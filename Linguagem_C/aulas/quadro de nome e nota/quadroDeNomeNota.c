#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 

/*
                                                                                      
*/

int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");

   char Nome[3][56];
   int Nota[3];

   for (int i = 0; i < 3; i++){   
      printf("Digite o nome do aluno %d: ", i + 1);
      scanf("%s", Nome[i]);
      printf("Nota do alulno %d: ", i);
      scanf(" %d", &Nota[i]);
   }
   
   printf("\n\n\tNome: \t\tNota:\n");
   for (int i = 0; i < 3; i++){
      printf("\t\t%s --------------%d\n", Nome[i], Nota[i]);
   }
   

   return 0;
}
