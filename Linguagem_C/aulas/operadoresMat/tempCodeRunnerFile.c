#include <stdio.h>

int main (){

      int a = 10, b = 20;
      float pi = 3.1415;
      
      a = (int)pi;

      printf("\n\nvalor de a = %d", a);
      

      printf("\nSoma 10 + 20 = %d\n", a + b);
      printf("\nSubtracao 10 - 20 = %d\n", a - b);
      printf("\nDivisao 10 // 20 = %f \n", a / b );
      printf("\nMultiplicacao 10 x 20 = %d\n", a * (float)b);//converter b para float

      
      

   return 0;
}
