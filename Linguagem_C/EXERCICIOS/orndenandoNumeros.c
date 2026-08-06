#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <time.h> 

                /* Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e 
                                                após a ordenação.*/


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    

  int i, contador = 0, copia = 0, troca, vetor[100];

  srand(time(NULL));


  for ( i = 0; i < 100; i++){
    vetor[i] = rand() % 1000;
  }
 
  printf("Ordem original:\n");
   for ( i = 0; i < 100; i++){
    printf("%3d ", vetor[i]);
  }
 
  

  do{
    troca = 0;
    contador++;
    for (i = 0; i < 99; i++){
      if(vetor[i] > vetor[i + 1]){
        copia = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = copia; 
        troca = 1;
      }
    }
  }while (troca);
  
  printf("\n\nOrdem organizada: \n");
  for ( i = 0; i < 100; i++){
    printf("%3d ", vetor[i]);
  }
  printf("\n\ncontou: %d vezes", contador);

    return 0;
}
