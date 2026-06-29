#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float n1, n2, n3, n4, n5, p, n;
    printf("Digite 3 numeros para serem comparados: \n");
    printf("N1: ");
    scanf("%f", &n1);
    printf("\nN2: ");
    scanf(" %f", &n2);
    printf("\nN3: ");
    scanf(" %f", &n3);
    printf("\nN4: ");
    scanf(" %f", &n4);
    printf("\nN5: ");
    scanf(" %f", &n5);

   if (n1 < 0){
      p += 1;
   }
   else
   n +=1;

    if (n2 < 0){
      p += 1;
   }
   else
   n +=1;

    if (n3 < 0){
      p += 1;
   }
   else
   n +=1;

    if (n4 < 0){
      p += 1;
   }
   else
   n +=1;

    if (n5 < 0){
      p += 1;
   }
   else
   n +=1;

   printf("foram digitados %f numeros negativos\n", p);
   printf("foram digitados %f numeros positivos", n);

}
