#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 
#include <time.h> 



typedef struct {

      char tipo[100];
      char marca[50];
      char modelo[25];
      char energia;
      char descricao[100];
      int quantidade;

}eletronico;


eletronico lerDados(){

    eletronico e;

    printf("Digite o tipo de eletrodomestico: ");
    fgets(e.tipo, 100, stdin);
    printf("Marca: ");
    fgets(e.marca, 50, stdin);
    printf("Modelo: ");
    fgets(e.modelo, 25, stdin);
    printf("Energia: ");
    scanf(" %c", &e.energia);
    getchar();
    printf("Descrição: ");
    fgets(e.descricao, 100, stdin);
    printf("Quantidade: ");
    scanf("%d", &e.quantidade);
     
    return e;
}


void imprimirEletronico(eletronico el, int cod){

      printf("\n\nNome: %s", el.tipo);
      printf("Marca: %s", el.marca);
      printf("Modelo: %s", el.modelo);
      printf("Energia: %c\n", el.energia);
      printf("Descrição: %s", el.descricao);
      printf("Quantidade: %d\n", el.quantidade);
       printf("Codigo: %d \n\n", cod);

      
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    srand (time(NULL));


    eletronico ele;
    int codigo;

    
    codigo = 1 + rand () % 10000;

    ele = lerDados();

    imprimirEletronico(ele, codigo);
   

    return 0;
}
