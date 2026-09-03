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
            fprintf(pasta, "%s;%02d;%.2f ", nome, idade, altura);//arquivo, o que queremos no arquivo, de onde vira o conteudo do arquivo txt
            printf("Digite um 1 para adicionar mais uma pessoa a lista: ");
            scanf("%d", &opcao);
            getchar();
        }while (opcao == 1);
    fclose(pasta);    
    }
    else
        printf("ERRO!\nFalha ao criar arquivo");
}
void ler(char f[]){
    FILE *pasta = fopen(f, "r");
    char nome[100];
    int idade;
    float altura;

    if (pasta){
        printf("\n\n== DADOS PESSOAIS ==");
        while (fscanf(pasta, "%100[^;];%d;%f", nome, &idade, &altura) == 3){
            printf("\n\tNome: %s\n\tIdade: %d\n\tAltura: %.2f", nome, idade, altura);
        }        
        fclose(pasta);
    }
    else
        printf("ERRO!\nFalha ao ler arquivo");
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char contos[100] = {"Dados_Pessoais.txt"};

  escrever(contos);
  ler(contos);
  

   return 0;
}
