#include <stdio.h>

int main (){
      //long aumenta o tamanho de ocupação da memoria, e o valor maximo suportado pelo int
   
   long long int x = 2147483647;

   printf("Tamanho de x em bytes: %d\n", sizeof x);

   printf("Tamanho de x em bytes: %lld\n", x);
   x++;
   printf("Valor de x: %lli\n", x);

     





   return 0;
}
