#include <stdio.h>

int main (){

       char sexo;
       int idade;
       float peso, altura;

      printf("Idade, Peso, altura, Sexo[M/F]\n");
      scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

      printf("Idade: %d\nPeso: %.1f\nAltura: %.1f\nsexo: %c", idade, peso, altura, sexo);





   return 0;
}
