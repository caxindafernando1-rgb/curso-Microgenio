#include <stdio.h>
#include <locale.h>
#include <windows.h>  

                              /*Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um 
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar*/

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

  int i, opcao, menu[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  do{
    printf("== MENO DE OPÇÃOS ==\n\n");
    printf("0 - FINALIZAR PROGRAMA\n1 - VER NÚMEROS\n2 - VER NÚMEROS INVETIDOS ");
    printf("\nOpção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
      for ( i = 0; i < 10; i++){
        printf("%d ", menu[i]);}
        printf("\n\n");
      break;

    case 2:
      for ( i = 10; i = 0; i--){
        printf("%d ", menu[i]);}
        printf("\n\n");
      break;
    }
  }while(opcao != 0);


    return 0;
}
