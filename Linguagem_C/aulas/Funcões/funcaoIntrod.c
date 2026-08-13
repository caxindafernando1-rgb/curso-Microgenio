#include <stdio.h>
#include <locale.h>
#include <windows.h>  



//Funcão:
int minhaFuncao(char str[]){
      int tam = 0;

      while (str[tam] != '\0'){
            tam++;
      }

      return tam;
}


//Procedimento/Vazio-(Não precisa de retorno)
void imprimirString(char palavra[]){
      int i = 0;

      while(palavra[i] != '\0'){
            printf("%c", palavra[i]);
            i++;
      }
      printf("\n\n");
}


//Função Principal:
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    char van[20] = {"Caxinda"};

    printf("\nstrlen: %d", strlen(van));
    printf("\nminha str: %d\n", minhaFuncao(van));
    imprimirString(van);

    
 return 0;
}
