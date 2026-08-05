#include <stdio.h>
#include <locale.h>
#include <windows.h>  
                                                            /*) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos 
            diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas 
            vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade 
            vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que 
            receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, 
            determine e mostre:*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, num1[25] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};



    printf("\n\nInversão do Vetor:\n");
      for ( l = 20; l >= 0; l--){
           printf("|%d| %3d \n", l, num1[l]);
      }
   
    
  
}