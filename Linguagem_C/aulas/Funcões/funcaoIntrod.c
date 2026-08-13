#include <stdio.h>
#include <locale.h>
#include <windows.h>  




int minhaFuncao(char str[]){
      int tam = 0;

      while (str[tam] != '\0'){
            tam++;
      }

      return tam;
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
   

    char van[20] = {"Caxinda"};

    printf("strlen: %d", strlen(van));
    printf("\nminha str: %d", minhaFuncao(van));

    
 return 0;
}
