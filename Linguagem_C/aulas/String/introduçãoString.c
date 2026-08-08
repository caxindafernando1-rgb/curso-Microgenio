#include <stdio.h>
#include <locale.h>
#include <windows.h>  



                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    int i;
    char nome[20];

    printf("\n\nDigite seu : ", nome);
    //scanf("%20[^\n]", nome);

    //gets(nome);
    fgets(nome, 20, stdin);

    printf("palavra digitada: %s \n", nome);

    i = 0;

    while ( nome[i] != '\0'){
        printf("%d = %d\n", i, nome[i]);
        i++;
    }
    printf("\n");
 

 return 0;
}
