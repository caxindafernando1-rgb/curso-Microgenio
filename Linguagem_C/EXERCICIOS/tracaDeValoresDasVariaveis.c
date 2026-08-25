#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>


/*
                                                           Trocar o conteúdo de duas variáveis por meio de ponteiros | 
*/

void troca(int *a, int *b){

    float c;
     c = *a;
    *a = *b;
    *b = c;

}

   
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int valorA = 15;
    int valorB = 32;

    printf("\n\nValor de A: %d Valor de B: %d\n", valorA, valorB);
    troca(&valorA, &valorB);
    printf("Valor de A: %d Valor de B: %d\n\n", valorA, valorB);


 return 0;
}
