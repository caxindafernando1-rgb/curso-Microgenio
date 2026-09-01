#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                     Como escrever em arquivo texto usando procedimentos
*/


void escrever(char f[]){
    FILE *pasta =  pasta = fopen(f, "w");
    char texto;
    if (pasta){
        printf("Escreva seu texto e digite 'ENTER' para finalizar.\n");
        scanf("%c", &texto);
        while (texto != '\n'){
            fputc(texto, pasta);
            scanf("%c", &texto);
        }
        fclose(pasta);
    }
    else{
        printf("ERRO!\nfalha ao criar arquivo");
    }
}


void ler(char f[]){
    FILE *pasta =  pasta = fopen(f, "r");
    char texto;
    if(pasta){
        printf("\n\nLer o arquivo dentro da pasta-Contos: \n");
        while (!feof(pasta)){
          texto = fgetc(pasta);
          printf("%c", texto);
        }
        printf("\n\n");
      fclose(pasta);    
  }
  else
    printf("ERRO!\nO Arquivo não foi criado");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char contos[] = {"Contos.txt"};

  escrever(contos);
  ler(contos);


   return 0;
}
