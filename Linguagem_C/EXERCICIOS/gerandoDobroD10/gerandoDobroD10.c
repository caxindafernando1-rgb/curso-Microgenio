#include <stdio.h>
#include <locale.h>
#include <windows.h>  

                                    /* Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado 
                                                  em um terceiro vetor. Imprima os três vetores na tela.*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, num1[25] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 47, 19, 283, 38, 19, 48,93, 289, 38, 28, 18, 18, 38, 49, 58, 1 }, num2[25] =  { 21, 32, 13, 44, 55, 76, 7, 8, 9, 7, 1, 53, 3, 6, 4, 3, 29, 8, 2, 8, 1, 3, 4, 5, 9}, num[25];



    printf("\n\nSoma dos dois vetores:\n");
      for ( l = 0; l < 25; l++){
           num[l] = num1[l] + num2[l];
           printf("|%d| %3d + %3d = %3d \n", l, num1[l], num2[l], num[l]);
      }
   
    
  
}