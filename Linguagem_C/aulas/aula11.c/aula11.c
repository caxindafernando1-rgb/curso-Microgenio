#include <stdio.h>

int main (){

       char sexo;
       int idade;
       float peso, altura;

      printf("Sexo[M/F], Idade, Peso, altura:\n");
      scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

      printf("sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.1f\n", sexo, idade, peso, altura);





   return 0;
}
