#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int i, num[3];
   srand(time(NULL));
    
    for(i = 0; i < 3; i++ )
      num[i] = 1 + rand() % 10;

  
   for(i = 0; i < 3; i++){
    printf("valor %d: ", i); 
       printf("%d \n", num[i]);}

}