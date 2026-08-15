#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 
                            //Imprimir um valor de n a 0 usando função recursiva

void imprimir(int x){
      if(x == 0)
            printf("%d ", x);
      else{
            imprimir(x - 1);//Recursão(chamar a função/procedimento dentro dela mesma)
            printf("%d ", x);
           
          
      }
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


     int n;

     printf("Digite um valor: ");
     scanf("%d", &n);
     imprimir(n);

 return 0;
}
