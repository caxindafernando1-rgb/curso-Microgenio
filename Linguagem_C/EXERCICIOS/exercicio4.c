#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float not1, not2, media;
    int opcao;


    do{
        do{
            printf("Primeira Nota: ");
            scanf("%f", &not1);
        }while(not1 < 0 || not1 > 10 );


        do{
            printf("Segunda Nota: ");
            scanf(" %f", &not2);
        }while(not2 < 0 || not2 > 10 );

        media = (not1 + not2) / 2;
        printf("\n\nMédia: %.2f\n\n", media);

        printf("Opção (1-continuar 2-sair): ");
        scanf(" %d", &opcao);
    }while(opcao != 2);
    
 return 0;
}
