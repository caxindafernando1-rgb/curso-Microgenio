#include <stdio.h>
#include <locale.h>

int main (){

   setlocale(LC_ALL, "Portuguese");
   printf("coração");



   

/*
   setlocale(LC_ALL, NULL);//definir retornos do C que usa a tabela ascc simplificada sem assentuação

   setlocale(LC_ALL, "Portuese"); //definir retornos em portugues
*/

   return 0;
}
