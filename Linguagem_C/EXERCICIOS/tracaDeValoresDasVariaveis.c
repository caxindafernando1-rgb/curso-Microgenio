#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>


/*
                                                               Função que copia caracteres
*/
int minhaCopia(char *origem, char *destino){

    int i = 0;

    while (*(origem + i) != '\0'){
        *(destino + i) = *(origem + i);
        i++;
    }
    *(destino + i) = '\0';
    return i;

}
   
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    char destino[30] = " ", origem[30] = "What tha hell!";

    printf("\n\ntamnho: %d\n", minhaCopia(origem, destino));
    printf("Destino: %s\n\n", destino);

 return 0;
}
