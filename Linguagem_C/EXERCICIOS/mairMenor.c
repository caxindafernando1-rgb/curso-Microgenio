#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  int limite, i, s;
  printf("Digite o valor limite: ");
  scanf("%d", &limite);

  for ( i = 0; i <= limite; i+=1)
  {
    s = limite * 2 - 1;
    printf("%d ", s);
  }
  
    
return 0;
}
