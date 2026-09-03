#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                          fprintf
*/


void escrever(char f[]){
    FILE *pasta = fopen(f, "w");
    char nome[100];
    int idade, opcao;
    float altura;

    if(pasta){
        do{
            printf("Nome: ");
            scanf("%100[^\n]", nome);
            printf("Idade: ");
            scanf("%d", &idade);
            getchar();
            printf("Altura: ");
            scanf("%f", &altura);
            getchar();
            fprintf(pasta, "Nome: %s\n Idade: %02d Altura: %.2f ", nome, idade, altura);//arquivo, o que queremos no arquivo, de onde vira o conteudo do arquivo txt
            printf("Digite um 1 para adicionar mais uma pessoa a lista: ");
            scanf("%d", &opcao);
            getchar();
        }while (opcao == 1);
    fclose(pasta);    
    }
    else
        printf("ERRO!\nFalha ao criar arquivo");
}

int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char contos[100] = {"Dados_Pessoais.txt"};

  escrever(contos);
  

   return 0;
}
