#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>

/*                                             Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.
*/
                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

  

    int l, c, total, soma, falhou = 0, tam = 4, mat[4][4] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};


    soma = 0;
    for (l = 0; l < tam; l++)
      soma += mat[l][l];
    printf("\nDiagonal Principal: %d\n", soma);

    total = soma; 
    
    soma = 0;
    for ( l = 0; l < tam; l++)
      soma += mat[l][tam - 1 - l];
     printf("\n\nDiagonal Segundaria: %d\n", soma);
    
    if(total != soma){
      printf("\nA Diagonal Segundaria é diferente");
      falhou = 1;
    }
    

   for (l = 0; l < tam; l++){
      soma = 0;
      for (c = 0; c < tam; c++)
            soma += mat[l][c];
      printf("\nLinha %d: %d\n", l, soma);
   
       if(total != soma){
      printf("\nA Linha %d é diferente\n", l);
       falhou = 1;
   }
}

   for (c = 0; c < tam; c++){
      soma = 0;
      for (l = 0; l < tam; l++)
        soma += mat[l][c];
            printf("\nColuna %d: %d: \n", c, soma);
      
      if(total != soma){
            printf("\nA Coluna %d é diferente\n", c);
            falhou = 1;
      
     }
   }
   
   if(falhou == 0)
      printf("\n\nCubo Magico!\n\n");
    




 return 0;
}
