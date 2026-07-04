#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float dol = 1, real =  6, n;
    int opcoes, c;

    printf("Digita um valor para ser convertido: ");
    scanf("%f", &n);

    printf("#Para dolar digite 1\n#Para converter em euros digite 2\n");
    printf("Opção: ");
    scanf(" %d", &opcoes);

    switch(opcoes){
        case 1:
          n = real;
          c = real * dol;
          printf("%.2f reais são %.2f dolares", n, dol);
          break;
        case 2:
          n = dol;
          c = dol * real;
          printf("%.2f dolares são %.2f reais", n, real);
          break;
}
return 0;
}
