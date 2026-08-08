#include <stdio.h>
#include <locale.h>
#include <windows.h>  



                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    int i, tam = 0;
    char nome[20];

    printf("\n\nDigite seu : ", nome);
    //scanf("%20[^\n]", nome);

    //gets(nome);
    fgets(nome, 20, stdin);


    i = 0;
    while ( nome[i] != '\0'){
        tam++;
        i++;
    }

    i = 0;
    while(nome[i] != '\0'){
        if(nome[i] == '\n')
            nome[i] = '\0';
        i++;
    }


     i = 0;
    while(nome[i] != '\0'){
        printf("\n %d == %c \n", i, nome[i]);
        i++;
    }

    printf("\npalavra digitada: %s \n", nome);
    printf("\n Tamanho da string: %d", tam);
 

 return 0;
}
