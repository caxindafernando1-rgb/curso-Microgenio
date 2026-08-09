#include <stdio.h>
#include <locale.h>
#include <windows.h>  


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    char c[50] = {" Como você está?"}; 
    char *letra;//variavel ponteiro
    char *palavra;
    char str[] = {"Como"};

    palavra = strstr(c, str);//acha a substr 'str' na str'c'
    letra = strchr(c, 'o');//acha o primeiro 'o' dentro de c2

    printf("\n%s\n", c);
    printf("== Buscando 'O' ==\n");
    printf("\nPrimeiro 'O': %c\n ", *letra);
    printf("A letra depois do primeiro 'O': %c\n ", *(letra + 1));//soma poteriana: acha a proxima letra depois do primeiro 'o'

    letra = strrchr(c, 'o');
    printf("\n\nUltimo 'O': %c\n ", *letra);
    printf("A letrra antes do ultimo 'O': %c\n ", *(letra - 1));

    printf("\n\n== Buscando 'Como' ==\n");
    if(palavra)
        printf("Ponteiro 'Como' achado: %c%c%c%c\n\n", *palavra, *(palavra + 1) , *(palavra + 2), *(palavra + 3), *(palavra + 4));
    else
        printf("PONTEIRO NULLO");

 return 0;
}
