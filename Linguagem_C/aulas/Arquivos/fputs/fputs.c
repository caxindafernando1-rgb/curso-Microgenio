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

void ler(char f[]){
    FILE *pasta = fopen(f, "r");
    char texto[500];

    if (pasta){
        printf("\n\n\t\t== Conto ==\n");
        while (!feof(pasta) && fgets(texto, 500, pasta)){//fgets(de onde vai receber, o limite maximo, o arquivo)
                printf("--> %s", texto);
        }
        printf("\n\n");
        fclose(pasta);
    }
    else
        printf("ERRO!\n Falha ao ler arquivo");
    

}

int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char conto[] = {"contos.txt"};

  //escrever(conto);
  ler(conto);


   return 0;
}
