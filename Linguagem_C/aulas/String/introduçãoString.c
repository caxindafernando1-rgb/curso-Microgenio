#include <stdio.h>
#include <locale.h>
#include <windows.h>  



                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    char nome[5];

    printf("\n\nDigite seu : ", nome);
    //scanf("%20[^\n]", nome);

    //gets(nome);
    fgets(nome, 5, stdin);

    printf("\n%d\n", nome);

 return 0;
}
