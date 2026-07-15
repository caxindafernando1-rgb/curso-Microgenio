#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  int opcao;
  float n1, n2, c;

  printf(" == CALCULADORA == \n\n");
  printf("1-Soma \n2-Multiplicar \n3-Dividir \n4-Subtrair\nOpção: ");
  scanf("%d", &opcao);
  if (opcao >= 1 && opcao <= 4){
     printf("Digite o Primeiro número: ");
    scanf(" %f", &n1);

    printf("Digite o Segundo número: ");
    scanf(" %f", &n2);
  }else
    printf("opçao invalida!");


  switch (opcao)
  {
  case 1:
    c = n1 + n2;
    printf(" %.2f + %.2f = %.2f", n1, n2, c);
    break;
  case 2:
   c = n1 * n2;
   printf(" %.2f x %.2f = %.2f", n1, n1, c);
   break;
  case 3:
   while (n2 == 0 )
   {
    printf("Numero invalido!\n Digite o segundo número novamente: ");
    scanf(" %f", n2);
   }
   c = n1 / n2;
   printf("%.2f / %.2f = %.2f", n1, n2, c);
   break;
   case 4:
    c = n1 - n2;
    printf("%.2f - %.2f = %.2f", n1, n2, c);
    break;
  default:
   printf("Opção invalida!");
    break;
  }

}