#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 

/*
                                                                                    copia invertida
*/

void inverter(char vet[]){
  int auxiliar, fim, tam = strlen(vet);

  fim = tam - 1;
  for (int i = 0; i < tam/2; i++){
    auxiliar = vet[i];
    vet[i] = vet[fim];
    vet[fim] = auxiliar;
    fim--;
  }  
}

char* inverter2(char vet[]){
  int i, fim, tam = strlen(vet);
  char *novo = malloc((tam + 1) * sizeof(char));

  fim = tam - 1;
  for ( i = 0; i < tam; i++){
    novo[fim] = vet[i];
    fim--;
  }
  

  novo[i] = '\0';
  return novo;
}


int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");

  char vetor[30] = {"Fernando Caxinda"};
  char *p;
 

  printf("%s \n", vetor);
  inverter(vetor);
  printf("%s \n", vetor);

  p = inverter2(vetor);
  printf("%s ", p);


   return 0;
}
