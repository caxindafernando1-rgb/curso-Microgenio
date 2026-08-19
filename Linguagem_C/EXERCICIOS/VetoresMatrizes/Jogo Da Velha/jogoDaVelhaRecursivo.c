 #include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>

/*                                             
                                    Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte 
                                                                     se deseja jogar novamente
*/


char jogo[3][3];
int l, c;


void inicializarMatriz(){
      for ( l = 0; l < 3; l++){
            for (c = 0; c < 3; c++){
                  jogo[l][c] = ' ';
            }
            
      }
      
}


void imprimir(){
      printf("\n\n\t  0    1    2\n\n");
      for (l = 0; l < 3; l++){
            for (c = 0; c <  3; c++){
                  if(c == 0)
                        printf("\t");
                  printf("  %c ", jogo[l][c]);
                  if(c < 2)
                        printf("|");
                  if(c == 2)
                        printf("   %d", l);
            }
            printf("\n");
            if(l < 2)
                  printf("\t--------------\n");
      }
      
}


/*
 função para verificar vitória por linha
      1 - ganhou
      0 - não ganhou ainda
*/
int ganhouPorLinha(int l, char c){
      if(jogo[l][c] == c && jogo[l][1] == c && jogo[l][2] == 0)
            return 1;
      else
            return 0;
}


/*
      função para verificar vitoria por linha
      1 - ganhou
      0 - não ganhouo ainda
*/
int ganhouPorLinhas(char c){
      int ganhou = 0;
      for (l = 0; l < 3; l++){
            ganhou += ganhouPorLinha(l, c);
      }
      return ganhou;
}


/*
      função para verificar vitoria em uma coluna
      1 - ganhou
      0 - não ganhou ainda

*/
int ganhouPorColuna(int c, char j){
      if(jogo[0][c] == j && jogo[1][c] == j && jogo[2][c] == j)
            return 1;
      else
            return 0;
}


/*
      função que veirifica vitoria por colunas
      1 - ganhou
      0 - não ganhou ainda
*/
int ganhouPorColunas(char j){
      int ganhou = 0;
      for (c = 0; c < 3; c++){
            ganhou += ganhouPorColuna(c, j);
      }
      return ganhou;
      
}


/*
      função que veirifica vitoria na diagonal principal
      1 - ganhou
      0 - não ganhou ainda
*/
int ganhouPorDiagPrincipal(char c){
      if(jogo[0][0] == c && jogo [1][1] == c && jogo [2][2] == 0)
            return 1;
      else
            return 0;
}


/*
      função que veirifica vitoria na diagonal secundaria
      1 - ganhou
      0 - não ganhou ainda
*/
int ganhouPorDiagSecundaria(char c){
      if(jogo[0][2] == c && jogo [1][1] == c && jogo [2][0] == 0)
            return 1;
      else
            return 0;
}


/*
      função que diz se uma coordenada é valida ou não
      1 - valida
      0 - não é valida
*/
int ehvalida(int l, int c){
      if(l >= 0 && l < 3 && c >= 0 && c < 3 && jogo[l][l] == ' ')
            return 1;
      else
            return 0;
}


/*
      procedimento para ler as coodenadas do jogador
*/
void lerCoordenadas(char j){
      int linha, coluna;

      printf("Digite linha: ");
      scanf("%d", &linha);
      printf("Digite coluna: ");
      scanf(" %d", &coluna);

      while(ehvalida(linha, coluna) == 0){
            printf("\nCoordenada invalida! Digite novamente.\n");
            printf("Digite linha: ");
            scanf("%d", &linha);
            printf("Digite coluna: ");
            scanf(" %d", &coluna);
      }
      jogo[linha][coluna] = j;

}


//Função que retorna a quantidade de posições vazias
int quantVazias(){
      int quantidade = 0;

      for ( l = 0; l < 3; l++){
            for (c = 0; c < 3; c++){
                  if(jogo[l][c] == ' ')
                        quantidade++;
            }   
      }
      return quantidade;   
}


//Procedimento jogara com loop principal do jogo
void jogar(){
      int jogador = 1, vitoriaX = 0, vitoriaO = 0;
      char jogador1 = 'X', jogador2 = 'O';

      do{
            imprimir();
            if (jogador == 1){
                  lerCoordenadas(jogador1);
                  jogador++;
                  vitoriaX += ganhouPorLinhas(jogador1);
                  vitoriaX += ganhouPorColunas(jogador1);
                  vitoriaX += ganhouPorDiagPrincipal(jogador1);
                  vitoriaX += ganhouPorDiagSecundaria(jogador1);
            }
            else{
                  lerCoordenadas('O');
                  jogador = 1;
                  vitoriaO += ganhouPorLinhas(jogador2);
                  vitoriaO += ganhouPorColunas(jogador2);
                  vitoriaO += ganhouPorDiagPrincipal(jogador2);
                  vitoriaO += ganhouPorDiagSecundaria(jogador2);
            }
      }while(vitoriaX == 0 && vitoriaO == 0 && quantVazias() > 0);

      if(vitoriaO == 1)
            printf("\n\nPARABÉNS JOGADOR 2. Você venceu!!!\n\n");
      else if(vitoriaX == 1)
            printf("\n\nPARABÉNS JOGADOR 1. Você venceu!!!\n\n");
      else
            printf("\n\nQue pena as opções esgotaram, Perderam os dois!!!\n\n");

}




int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    int opcao;


    
    do{
      inicializarMatriz();
      jogar();

      printf("\nDigite 1 para jogar novamente: ");
      scanf("%d", &opcao);
    }while(opcao == 1);


 return 0;
}
