#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float dol, real, n;
    int opcoes, c;

    prontf("Digita um valor para ser convertido: ");
    scanf("%f", &n);

    printf("#Para dolar digite 1\n#Para converter em euros digite 2\n");
    scanf(" %d", &opcoes);

    switch(opcoes){
        case 1:
          n = real;
          c = real * dol;
          printf("%f são %.2f dolares", n, dol);
          break;
        case 2:
          n = dol;
          c = n * real;
          printf("%f são %.2f reais", n, real);
          break;
}
return 0;
