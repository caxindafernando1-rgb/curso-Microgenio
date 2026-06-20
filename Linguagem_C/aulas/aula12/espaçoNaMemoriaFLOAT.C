#include <stdio.h>

int main (){
      //Double uma grande precisão na parte decimal
     
      float x = 3.1415;

      long double y = 3.14151526324466666663753;


      __mingw_printf(" Valor Y == %Lf\n", y);
      printf("Um long double precisa de %d bytes de momoria.\n", sizeof y);

   return 0;
}
