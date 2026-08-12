#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h> 


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");



    char palavra[30];
    int opcao, i, igual = 0, tam;

    printf("\n\nDigite uma palavra: ");
    scanf("%29s", palavra);


    tam = strlen(palavra) - 1;
    i = 0;


    while(tam >= i){
      if(palavra[i] != palavra[tam]){
            igual++;
      }
      i++;
      tam--;
    }


    if(igual == 0)
      printf("\n\nÉ polidromo!\n\n");
    else
      printf("\n\nNão é polidromo!\n\n");
    

 return 0;
}
