#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");


  int *vet, *vet1;

  vet = malloc(10 * sizeof(int));
  vet1 = calloc(10, sizeof(int));

  printf("com malloc: ");//quando definimos vetores com malloc e sem lhes atribuir o valar, esles nos retornam ponteiros com lixo de memoria por isso temos sempre de lhes inicializar com 0
  for (int i = 0; i < 10; i++){
    printf("%d ", vet[i]);
  }
  printf("\n");

  printf("com Calloc: ");//já elimina o lixo de memoria inicializando os com 0
  for (int i = 0; i < 10; i++){
    printf("%d ", vet1[i]);
  }
  

   return 0;
}
