#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  
                                                            /*9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
                                        a) some cada uma das linhas armazenando o resultado em um vetor;
                                        b) some cada uma das colunas armazenando o resultado em um vetor;
                                        c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    srand(time(NULL));

    int l, c, soma, somaLinhas[5], somaColunas[10], matriz[5][10];

     for ( l = 0; l < 5; l++){
        for ( c = 0; c < 10; c++){
           matriz[l][c] = rand() % 100;
        }
    }

    for ( l = 0; l < 5 ; l++){
        soma = 0;
        for (c = 0; c < 10; c++){
            soma += matriz[l][c];
        }
        somaLinhas[l] = soma;
    }


    for ( c = 0; c < 10; c++){
        soma = 0;
        for ( l = 0; l < 5; l++){
            soma += matriz[l][c];
        }
        somaColunas[c] = soma;
    }
    

    printf("\n\nMatriz: \n");
    for ( l = 0; l < 5; l++){
        for (c = 0; c < 10; c++){
            printf("%3d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\n\nSoma das Linhas: \n");
    for (l = 0; l < 5; l++){
        printf("Linha: %3d\t Soma: %3d\n", l, somaLinhas[l]);
    }

    printf("\n\nSoma das Colunas: \n");
    for (c = 0; c < 10; c++){
        printf("Coluna %3d\t Soma: %3d\n", c, somaColunas[c]);
    }
    printf("\n\n");
      
 return 0;
}
