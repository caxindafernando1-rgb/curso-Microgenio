#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int valor, i, divisores = 0, opcao;
   do{
     do{
        printf("Digite um Valor: ");
        scanf("%d", &valor);
     }while(valor < 2 );

    printf("%d é divisivel por: ", valor);
    for (i = 1; i <= valor; i++){
        if(valor % i == 0){
           printf("%d, ", i);
           divisores ++;
       
    }
}
    printf("\n\n");

     if (divisores > 2)
        printf("%d Não é Primo\n\n", valor);
     else
       printf("%d É Primo\n\n", valor);

    printf("Digitar: \n1 - Para contiuar\n 0 - Para sair do programa: \n");
    scanf(" %d", &opcao);
   }while (opcao != 0);    
}