#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  char letra;
    
  printf("Digite um valor: ");
  scanf("%c", &letra);
  
  if (letra == "a" || letra == "A" || letra == "e" || letra == "E"|| letra == "i"
    || letra == "I" || letra == "O" || letra == "o" || letra == "u" || letra == "U")
    printf("%c é uma letra", letra);
  else
    printf("%c é uma consoante", letra);
    
return 0;
}
