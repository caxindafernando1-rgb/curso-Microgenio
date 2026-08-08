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

/*
    //ler Pelo taclado - 1:
    scanf("%20[^\n]", nome);

    //ler pelo teclado - 2:
    gets(nome);
    
*/

    //ler pelo teclado - 3:
    fgets(nome, 20, stdin);
    

    //Eliminar ultimo espaço vazeio 'Parar de ler o teclado  do Enter':
    i = 0;
    while(nome[i] != '\0'){
        if(nome[i] == '\n')
            nome[i] = '\0';
        i++;
    }


    //imprimir casa char da string:
     i = 0;
    while(nome[i] != '\0'){
        printf("\n %d == %c \n", i, nome[i]);
        i++;
    }


    //imprimir a palavra:
    printf("\npalavra digitada: %s \n", nome);

    //imprimir o número de char da string:
    printf("\n Tamanho da string: %d", strlen(nome));
 

 return 0;
}
