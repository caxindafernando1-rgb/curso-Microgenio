#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int opcoes;
    char nome[50];
    float preco;
    
    printf("\t == Digite uma Opeção == \n");
    printf("1 - Cadastrar Cliente\n2 - Ver Pessoas Cadastradas\n3 - Sair do Programa\n\n");
    printf("Opção: ");
    scanf("%d", &opcoes);
    printf("\n");

    switch(opcoes){
      case 1:
            printf("Nome: ");
            scanf("  %[^\n]s", nome);
            printf("preço: ");
            scanf("%f", &preco);
            printf("\nRegistro de %s efectuado!", nome);
            break;
      case 2:
            printf("Registro de Pagamentos: ");
            break;
      case 3:
            printf("Fim do programa...");
            break;
      default:
            printf("Opcao invalida!");
            break;
    }

}
