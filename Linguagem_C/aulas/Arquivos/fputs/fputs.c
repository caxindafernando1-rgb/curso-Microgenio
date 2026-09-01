#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                          fputs
*/


void escrever(char f[]){
    FILE *pasta = fopen(f,"w");
    char texto[500];

    if(pasta){
        printf("Escreva e preciona [0] para encerrar\n");
        scanf("%500[^\n]", texto);
        getchar();
        while (1){
           if (strcmp(texto, "0") == 0)//strcmp compara caracter por caracter
                break; // Sair do loop
            fputs(texto, pasta);
            fputc('\n', pasta);
            scanf("%500[^\n]", texto);
            getchar();
        }
        fclose(pasta);
    }
    else
        printf("ERRO!\nFalha ao criar o arquivo");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char conto[] = {"contos.txt"};

  escrever(conto);


   return 0;
}
