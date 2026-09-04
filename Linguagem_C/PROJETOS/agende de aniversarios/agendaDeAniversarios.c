#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 


/*
                                                                 LESTA DE DASTAS DE ANIVERSARIO <>
*/
typedef struct{
    char nome[100];
    int dia, mes, ano;
}Contacto;


void imprimir(Contacto **c, int quant){
    printf("\n\t== Lista de contactos ==\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < quant; i++){
        printf("%d = %02d/%02d/%4d -- %s\n", i+1, c[i]->dia, c[i]->mes, c[i]->ano, c[i]->nome);
    }
    printf("------------------------------------------\n");
}


int cadastrar_contacto(Contacto **c, int quant, int tam){
    if(quant < tam){
        Contacto *novo = malloc(sizeof(Contacto));
        printf("Nome: ");
        scanf(" %100[^\n]", novo->nome);
        printf("dia: ");
        scanf("%d", &novo->dia);
        getchar();
        printf("Mês: ");
        scanf("%d", &novo->mes);
        getchar();
        printf("Ano: ");
        scanf("%d", &novo->ano);
        c[quant] = novo;
        printf("\nContacto cadastrado com cucesso!!\n");
        return 1;
    }
    else{
        printf("Vetor sem espaço vazio!");
        return 0;
    }
}


void alterar_contacto(Contacto **c, int quant){
    int id;

    imprimir(c, quant);

    printf("Digite o ID do contacto a ser alterado: ");
    scanf("%d", &id);
    getchar();
    id--;

    if (id >= 0 && id < quant){
        Contacto *novo = malloc(sizeof(Contacto));
        printf("Nome: ");
        scanf("%100[^\n]", novo->nome);
        printf("dia: ");
        scanf("%d", &novo->dia);
        getchar();
        printf("Mês: ");
        scanf("%d", &novo->mes);
        getchar();
        printf("Ano: ");
        scanf("%d", &novo->ano);
        c[quant] = novo;
    }
    else
        printf("ERRO!\nID invalido");
}


void salvar(Contacto **c, int quant, char arq[]){
    FILE *pasta = fopen(arq, "w");

    if (pasta){
        fprintf(pasta, "%d\n", quant);
        for (int i = 0; i < quant; i++){        
            fputs(c[i]->nome, pasta);
            fputc('\n', pasta);
            fprintf(pasta, "%2d %2d %4d\n", c[i]->dia, c[i]->mes, c[i]->ano);
        }
        fclose(pasta);
    }
    else
        printf("ERRO!\nFalha ao criar arquivo.");
    
}

int Ler_Arquivo(Contacto **c, char arq[]){
    FILE *pasta = fopen(arq, "r");
    int quant = 0;
    Contacto *novo = malloc(sizeof(Contacto));

    if (pasta){
        fscanf(pasta, "%d\n", &quant);
        for (int i = 0; i < quant; i++){
            fscanf(pasta, "%50[^\n]", novo->nome);
            fscanf(pasta, "%02d %02d %4d\n", &novo->dia, &novo->mes, &novo->ano);
            c[i] = novo;
            novo = malloc(sizeof(Contacto));
        }
        fclose(pasta);
    }
    else
        printf("ERRO!\nFalha ao ler o arquivo");
    return quant;
}


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

    Contacto *agenda[50];
    int opcao, tam = 50, quant = 0;
    char arquivo[] = {"Agenda.txt"};

  do{
    printf("1 - Cadastrar\n2 - Alterar Cadastro\n3 - Imprimir Cadastro\n4 - Salvar\n5 - Ler Arquivo\n\n");
    printf("Opção -- ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao){
    case 1:
        quant += cadastrar_contacto(agenda, quant, tam);
        break;
    case 2:
        alterar_contacto(agenda, quant);
        break;
    case 3:
        imprimir(agenda, quant);
        break;
    case 4:
        salvar(agenda, quant, arquivo);
        break;
    case 5:
        quant = Ler_Arquivo(agenda, arquivo);
        break;
    default:
        if (opcao != 0)
            printf("Opção invalida!\n\n");
        break;
    }
  }while (opcao != 0);
 

   return 0;
}
