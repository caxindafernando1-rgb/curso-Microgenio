#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <string.h> 
#include <time.h>

typedef struct{

    int dia, mes, ano;

} Data;


void imprimir(Data *X){

    printf("\n%d/%02d/%d ", X->dia, X->mes, X->ano);

}


int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   

    Data data;
    Data *P;
    
    P = &data;
    data.dia = 20;
    data.mes = 07;
    data.ano = 2000;

    printf("\n%d/%02d/%d \n",data.dia, data.mes, data.ano);
    printf(" \n%d // %d", &P, &data);

    imprimir(P);
    
   

    return 0;
}
