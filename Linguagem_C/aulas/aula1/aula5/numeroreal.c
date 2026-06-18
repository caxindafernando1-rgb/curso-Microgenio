#include <stdio.h>

int main() {
   float numero;

  /*ler numero real:
   printf("Digita um numero: ");
   scanf("%f", &numero);
   printf("Valor da minha variavel: %.2f", numero);
   */

   /*Ler numero inteiro:
      int valor, valor2;
      valor = 50;

      printf("Digite um numero: ");
      scanf("%d", &valor);

      printf("Digite o segundo numero: ");
      scanf("%d", &valor2);

      printf("Valor da minha variavel: %d\nSegundo valor: %d", valor, valor2);
      */
      /*ler um caracter:
      char sexo = " Masculono ";
      printf("Digide o seu sexo[M/F]");
      scanf("%c", &sexo);

      printf("Voce e do sexo: %c", sexo);
      
      
      OUTRA FORMA DE LER CARACTERES:
      char sexo;
      printf("DIgite ser sexo: ");
      sexo = getchar();

      printf("voce e do sexo: %c", sexo);
      */
      
      
      /*
      char letra;
      printf("Digite um caracter: ");
      letra = getc(stdin);//Ler variavel pelo teclado

      printf("caracter lido: %c\n", letra);
      */

      char letra;
       printf("Digite um caracter: ");
      letra = fgetc(stdin);//Ler variavel pelo teclado(fgetc ler de arquivo mas o stdin le pelo teclado)

      printf("caracter lido: %c\n", letra);


    return 0;
}
