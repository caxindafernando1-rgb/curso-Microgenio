#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int n;
    printf("Digite 3 numeros para serem comparados: \n");
    printf("N: ");
    scanf("%d", &n);

    if (n % 2 == 0){
      printf("%d é divisivel por 2\n", n);
    }
    else
      printf("%d não é divisivel por 2\n", n);

      if (n % 3 == 0){
      printf("%d é divisivel por 3\n", n);
    }
    else
      printf("%d não é divisivel por 3\n", n);

      if (n % 5 == 0){
      printf("%d é divisivel por 5\n", n);
    }
    else
      printf("%d não é divisivel por 5\n");
   

}
