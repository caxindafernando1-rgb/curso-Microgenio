#include <stdio.h>
#include <locale.h>
#include <windows.h>  


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    char c[50] = {" Como você está?"}; 
    char *letra;//variavel ponteiro

    letra = strchr(c, 'o');//acha o primeiro 'o' dentro de c2

    printf("\n%s\n", c);
    printf("== Buscando 'O' ==\n");
    printf("\nPrimeiro 'O': %c\n ", *letra);
    printf("A letra depois do primeiro 'O': %c\n ", *(letra + 1));//soma poteriana: acha a proxima letra depois do primeiro 'o'

    letra = strrchr(c, 'o');
    printf("\n\nUltimo 'O': %c\n ", *letra);
    printf("A letrra antes do ultimo 'O': %c\n ", *(letra - 1));

    
 return 0;
}
