#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <limits.h>  

/*
                                                                                          

*/


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int vet[] = {1, 23, 4, 5};
    int tam = sizeof(vet)/sizeof(vet[0]);
    int maior_valor = INT_MAX, *maior;
    maior = &maior_valor;


    for (int i = 0; i < tam; i++)
    {
        if (vet[i] > *maior)
        {
            *maior = vet[i];
            printf("\nMaior valor: %d\n", *maior);
        }
        
    }
    

  


return 0;
}
