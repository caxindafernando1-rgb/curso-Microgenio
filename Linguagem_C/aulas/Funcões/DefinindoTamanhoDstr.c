#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


      int tam = 0;
      char str[10] = {"%"}, str2[10];

      printf("Digite o tamanho do vetor: ");
      scanf("%d", &tam);
      getchar();
 
     // sprintf(str2,"%d[^\n]", tam); 
      snprintf(str2, 10, "%d[^\n]", tam);//str2 recebe um vetor de tamanha 10, com o conteudo' "%d[^\n]" 'com tamanho tam 
      strcat(str, str2);

      char palavra[tam];
      printf("Digite uma frase: ");
      scanf(str, palavra);
      printf("%s\n", palavra);
 
 return 0;
}
