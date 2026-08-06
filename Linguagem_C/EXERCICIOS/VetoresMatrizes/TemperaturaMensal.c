#include <stdio.h>
#include <locale.h>
#include <windows.h>



                                                         /*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um 
                           vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
                           mês por extenso: janeiro, fevereiro …). Desconsidere empates*/


int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");



   int  indice_maior = 0,  indice_menor =  0, i;
   float menor = 99, maior = 0, temperatura[12];
   char mes[12][11] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

   for ( i = 0; i < 12; i++){
      printf("Mês de %s: ", mes[i]);
      scanf("%f", &temperatura[i]);
   }

   for ( i = 0; i < 12; i++){
      if(temperatura[i] > maior){
         maior = temperatura[i];
         indice_maior = i;
   }
}

   for ( i = 0; i < 12; i++){
      if(temperatura[i] < menor){
         menor = temperatura[i];
         indice_menor = i;
      }
   }
   
   printf("\nTemperatura mais alta: %.2f, Mês: %s\n\n", maior, mes[indice_maior]);
   printf("Temperatura minima: %.2f, Mês: %s", menor, mes[indice_menor]);
   

}