#include <stdio.h>
#include <locale.h>
#include <windows.h>  

/*
                                                                                            typedef struct {
                                                                                            char nome[30];
                                                                                            float valor;
                                                                                            char unidade[10];
                                                                                            int ativo;
                                                                                            } Sensor;

                                                                                            1 - Cadastrar sensores
                                                                                            2 - Listar sensores
                                                                                            3 - Mostrar maior leitura
                                                                                            4 - Calcular média das leituras
                                                                                            5 - Mostrar sensores ativos
                                                                                            0 - Sair





*/


typedef struct{
    char nome[30];
    float valor;
    char unidade[10];
    int ativo;
}Sensor;




int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     Sensor listaMat[5];
    int i = 0, opcao = 0, tam = 2;
    float  media = 0, c = 0, maior = 0;
    

    do{
    printf("\n\n=== MENU DE OPÇÕES === \n");
    printf("1 - Cadastrar sensores\n2 - Listar sensores\n3 - Mostrar maior leitura\n4 - Calcular média das leituras\n5 - Mostrar sensores ativos\n0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

   switch (opcao){
       
        case 1:  
            printf("Sensor[%d]", i + 1);
            getchar();
            printf("\n\nNome: ");
            scanf("%29[^\n]", listaMat[i].nome);
            getchar();
            printf("Valor: ");
            scanf("%f", &listaMat[i].valor);
            getchar();
            printf("Unidade: ");
            scanf("%9[^\n]", listaMat[i].unidade);
            getchar();
            printf("Ativo[1 ou 0]: ");
            scanf("%d", &listaMat[i].ativo);
            i++;
            break;


        case 2:
        printf("\n\n== LISTA DE SENSORES ==\n");
        for (i = 0; i < tam; i++)
             printf("\n == Nome: %s\nUnidade: %s\nValor: %.2f\nAtivo: %d\n\n", i, listaMat[i].nome, listaMat[i].unidade, listaMat[i].valor, listaMat[i].ativo);
        break;
        case 3:
        for (i = 0; i < tam; i++)  
            if(listaMat[i].valor > maior)
                maior = listaMat[i].valor;
            printf("\n\nO maior valor e: %.2f\n", maior);
        break;
        case 4:
        for ( i = 0; i < tam; i++){
            c += listaMat[i].valor;
            media = c / tam;
        }
        printf(" \nA média dos valores é: %.2f", media);
        break;
        case 5:
        printf("\n\n== Sensores ativos ==\n");
            for (i = 0; i < tam; i++) {
                if (listaMat[i].ativo == 1)
                    printf("\n == Nome: %s\nUnidade: %s\nValor: %.2f\nAtivo: %d\n\n", i, listaMat[i].nome, listaMat[i].unidade, listaMat[i].valor, listaMat[i].ativo);
        }
        case 0:
            break;
    default:
        printf("\nERRO!\nOpção invalida.\n\n");
        break;
    }
}while (opcao != 0);

return 0;
}
