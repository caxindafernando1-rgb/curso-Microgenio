 #include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>

/*                                             
                                    Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte 
                                                                     se deseja jogar novamente
*/
                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    //estrutura de dados?
    char jogo[3][3];
    int l, c, linha, coluna, ganhou, jogador, jogada, opcao;

    do{
      jogador = 1;
      ganhou = 0;
      jogada = 0; 
      //Como inicializar nossa estrutura de dados?
            for(l = 0; l < 3; l++){
                  for(c = 0; c < 3; c++){
                        jogo[l][c] = ' ';
                  }
            }
            do{
            //Imprimir Jogo

            printf("\n\n\t0    1   2 \n\n");
            for(l = 0; l < 3; l++){
                        for(c = 0; c < 3; c++){
                              if (c == 0){
                                    printf("\t");}
                              printf(" %c ", jogo[l][c]);
                              if( c < 2){
                                    printf("|");}
                              if (c == 2){
                                    printf("  %d", l);
                              }
                              
                        }
                  if( l < 2)
                        printf("\n\t-----------");
                  printf("\n");
                  }

            //ler coodenadas
            do{
            printf("JOGADOR %d digite a Linha: ", jogador);
            scanf("%d", &linha);
            printf("JOGADOR %d digite a Coluna: ", jogador);
            scanf(" %d", &coluna);
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            //Salvar coodenadas
            if (jogador == 1){
                  jogo[linha][coluna] = 'O';
                  jogador++;
            }
            else{
                  jogo[linha][coluna] = 'X';
                  jogador = 1;
            }
            jogada++;

            //alguém ganhou por linha
            if(jogo[0][0] == 'O' && jogo [0][1] == 'O' && jogo[0][2] == 'O' ||
                  jogo[1][0] == 'O' && jogo [1][1] == 'O' && jogo[1][2] == 'O' ||
                  jogo[2][0] == 'O' && jogo [2][1] == 'O' && jogo[2][2] == 'O'){
                        printf("Parabéns! O jogador 1 Venceu!\n\n");
                        ganhou = 1;
                  }
                  if(jogo[0][0] == 'X' && jogo [0][1] == 'X' && jogo[0][2] == 'X' ||
                  jogo[1][0] == 'X' && jogo [1][1] == 'X' && jogo[1][2] == 'X' ||
                  jogo[2][0] == 'X' && jogo [2][1] == 'X' && jogo[2][2] == 'X'){
                        printf("Parabéns! O jogador 2 Venceu!\n\n");
                        ganhou = 1;
                  }



                  //alguém ganhou por coluna
                  if(jogo[0][0] == 'O' && jogo [1][0] == 'O' && jogo[2][0] == 'O' ||
                  jogo[1][0] == 'O' && jogo [1][1] == 'O' && jogo[1][2] == 'O' ||
                  jogo[1][0] == 'O' && jogo [2][1] == 'O' && jogo[2][2] == 'O'){
                        printf("Parabéns! O jogador 1 Venceu!\n\n");
                        ganhou = 1;
                  }
                  if(jogo[0][0] == 'X' && jogo [1][0] == 'X' && jogo[2][0] == 'X' ||
                  jogo[1][0] == 'X' && jogo [1][1] == 'X' && jogo[2][1] == 'X' ||
                  jogo[2][0] == 'X' && jogo [2][2] == 'X' && jogo[2][2] == 'X'){
                        printf("Parabéns! O jogador 2 Venceu!\n\n");
                        ganhou = 1;
                  }
            



                  //alguém ganhou na diagonal principal
                  if(jogo[0][0] == 'O' && jogo [1][1] == 'O' && jogo[2][2] == 'O'){
                        printf("Parabéns! O jogador 1 Venceu!\n\n");
                        ganhou = 1;
                  }
                  
                  if(jogo[0][0] == 'X' && jogo [1][1] == 'X' && jogo[2][2] == 'X'){
                        printf("Parabéns! O jogador 2 Venceu!\n\n");
                        ganhou = 1;
                  }

                  //alguém ganhou? na diagonal secundária
                  if(jogo[0][2] == 'O' && jogo [1][1] == 'O' && jogo[2][0] == 'O'){
                        printf("Parabéns! O jogador 1 Venceu!\n\n");
                        ganhou = 1;
                  }

                  if(jogo[0][2] == 'X' && jogo [1][1] == 'X' && jogo[2][0] == 'X'){
                        printf("Parabéns! O jogador 2 Venceu!\n\n");
                        ganhou = 1;
                  }

            

            }while(ganhou == 0 && jogada < 9 );
            if(ganhou == 0)
                  printf("\n O jogo finalizou se um Vencedor!");
            printf("Digite 1 para jogar novamente: ");
            scanf("%d", &opcao);
      }while(opcao == 1);

 return 0;
}
