#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h> 


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");



    char palavra[30], copia[30];
    int opcao, i, igual, tam;

    do{
      igual = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for ( i = 0; i < strlen(palavra); i++){
      copia[i] = palavra[i];
      tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    for ( i = 0; i < tam; i++){
      if(copia[i] == palavra[i]){
            igual++;
      }
    }

    printf("Palavra digitada: %s\nCopia da palavra: %s", palavra, copia);

    if(igual == tam)
      printf("\n\nÉ Polindromo!\n");
    else
      printf("\n\nNão é Polindromo!\n");


      printf("\nDIgite [0] PARA SAIR: ");
      scanf(" %d", &opcao); 
   }while(opcao != 0);
    

 return 0;
 
}
