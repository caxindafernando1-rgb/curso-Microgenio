#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h> 

//Primeiro tipo da estrutura struct
typedef struct {
      int idade;
      char nome[100];
      char sexo;


}Pessoa1;


//Segundo tipo de extrutura struct
struct Pessoa2{
      int idade;
      char nome[100];
      char sexo;

};



int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    Pessoa1 Joao;
    struct Pessoa2 Fernandes;// Neste segundo tipo, devemos usar sempre o 'struct' para identificar a estrutura

//Atribuindo os valores:
    Joao.idade = 12;
    Joao.sexo = 'M';
    strcpy(Joao.nome, "João Pascal José");

//lendo os dados pelo teclado:
    printf("Nome: ");
    scanf("%100[^\n]", Fernandes.nome);
    printf("Idade: ");
    scanf(" %d", &Fernandes.idade);
    getchar();//limpar buffer do teclado
    printf("Sexo: ");
    scanf("%c", &Fernandes.sexo); 

    printf("\n\nDados do João:\nNome: %s\nSexo: %c\nIdade: %d\n\n", Joao.nome, Joao.sexo, Joao.idade);
    printf("\n\nDados do Fernandes:\nNome: %s\nIdade: %d\nSexo: %c\n\n", Fernandes.nome, Fernandes.idade, Fernandes.sexo);

 return 0;
}
