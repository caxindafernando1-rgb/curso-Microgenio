#include <stdio.h>
#include <locale.h>
#include <windows.h>  
                                          /*1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. 
                                          Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
                                                                       fim, imprima os dois vetores*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int l, c, user[10];

    for ( l = 0; l < 10; l++){
            printf("Digete o valor |%d|: ", l);
            scanf("%d", &user[l] );
      }
    
        printf("\n\nValores digitados:\n");
      for ( l = 0; l < 10; l++){
            printf("Volor |%3d |: %d", l, user[l]);
            printf("\n");
      }
      
      
      printf("\n\nDobro: \n");
      for ( l = 0; l < 10; l++){
           c = user[l] * 2;
           printf("Volor | %3d |\n", c);
      }

      
       
      
      
    
  
}