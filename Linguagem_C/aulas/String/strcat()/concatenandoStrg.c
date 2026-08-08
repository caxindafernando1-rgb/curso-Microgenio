#include <stdio.h>
#include <locale.h>
#include <windows.h>  


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    char c1[50] = {"ai."};
    char c2[50] = {" Como você está?"}; 

    //concatenar as strgs:
    strcat(c1, c2);

    //strs concatenadas:
    printf("%s ", c1);

    //comparar strs onde:
    //0 == strs Iguais
    //-1 == strs1 é maior
    //1 == strs2 é maior
    printf("\n comparação das Strgs: %d",  strcmp(c1, c2));


    //copiar strg:
    strcpy(c1, c2);

    printf("\n\ncopia: %s!\n copia 2: %s ", c1, c2);
 return 0;
}
