#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 



typedef struct{

    int dia, mes, ano;

}Data;

//Primeiro tipo da estrutura struct
typedef struct {

    Data Nascimento;
    int idade;
    char nome[100];
    char sexo;

}Pessoa1;



//Segundo tipo de extrutura struct
/*struct Pessoa2{

    Data Nascimento;
    int idade;
    char nome[100];
    char sexo;

};*/



Pessoa1 lerDados(){
    Pessoa1 Fe;


    //lendo os dados pelo teclado:
    printf("\nNome: ");
    scanf(" %100[^\n]", Fe.nome);
    printf("Idade: ");
    scanf(" %d", &Fe.idade);
    getchar();//limpar buffer do teclado
    printf("Sexo: ");
    scanf(" %c", &Fe.sexo);
    printf("Data de nascimento dd mm aaaa: ");
    scanf("%d%d%d", &Fe.Nascimento.dia, &Fe.Nascimento.mes, &Fe.Nascimento.ano);
    
    Fe.sexo = toupper(Fe.sexo);//Colocar o sexo 'M/F' digitado pelo teclado em Maiuscula
        
    return Fe;
}


void imprimir( Pessoa1 fe){
    printf("\n\nDados do Fernandes:\nNome: %s\nIdade: %d\nSexo: %c", fe.nome, fe.idade, fe.sexo);
    printf("\nData de Nascimento: %02d/%02d/%d.\n\n\n", fe.Nascimento.dia, fe.Nascimento.mes, fe.Nascimento.ano); 
}



int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    
    Pessoa1 Pessoas[2][2];

/*    struct Pessoa2 Fernandes;// Neste segundo tipo, devemos usar sempre o 'struct' para identificar a estrutura

//Atribuindo os valores:
    Joao.idade = 12;
    Joao.sexo = 'M';
    strcpy(Joao.nome, "João Pascal José");*/


    

    /*printf("\n\nDados do João:\nNome: %s\nSexo: %c\nIdade: %d\n\n", Joao.nome, Joao.sexo, Joao.idade);*/

   
        Pessoas[0][0] = lerDados();
        imprimir(Pessoas[0][0]);
    

 return 0;
}
