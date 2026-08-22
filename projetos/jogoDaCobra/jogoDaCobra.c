


#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <time.h>
#include "curses.h"

#define Largura 40
#define altura 20
#define tamanho_max 100
#define esperaPadrao 100

// Variáveis Globais do Cenário apenas
typedef struct {
  int x[tamanho_max];
  int y[tamanho_max];
  int comprimento;
  int direcaox;
  int direcaoy;
} Cobra;

Cobra cobra;
bool gameOver = FALSE;
char bufferDaTela[altura][Largura];

void inicializar(){
    initscr();            
    cbreak();             
    noecho();             
    keypad(stdscr, TRUE); 
    curs_set(0);          
    start_color();        
    nodelay(stdscr, TRUE); // IMPORTANTE: diz ao getch() para não ficar travado

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);

    //cabeça da cobra
    cobra.comprimento = 1;
    cobra.x[0] = Largura / 2;
    cobra.y[0] = altura / 2;
    cobra.direcaox = 1;
    cobra.direcaoy = 0;

    // Cria as bordas do retângulo do jogo
    for (int i = 0; i < altura; i++){
      for (int j = 0; j < Largura; j++){
        if(i == 0 || i == altura - 1 || j == 0 || j == Largura - 1){
          bufferDaTela[i][j] = '#'; 
        } else {
          bufferDaTela[i][j] = ' '; 
        }
      }
    }
}

void desenhar(){

    for (int i = 1; i < altura - 1; i++){
      for (int j = 1; j < Largura -1 ; j++){
          bufferDaTela[i][j] = ' '; 
      }
    }

  //desenhar a cobra
 for (int i = 0; i < cobra.comprimento; i++){
  int x = cobra.x[i];
  int y = cobra.y[i];
  bufferDaTela[y][x] = '@';
 }
 
    



  for (int i = 0; i < altura; i++){
    for (int j = 0; j < Largura; j++){
      mvaddch(i, j, bufferDaTela[i][j]);
    }
  }
  refresh(); 
}

void atualizar(){
 
  int novoX = cobra.x[0] + cobra.direcaox;
  int novoY = cobra.y[0] + cobra.direcaoy;
  
  //tetectar colizão
  if(novoX <=  0 || novoX >= Largura -1 || novoY <= 0 || novoY >= altura - 1){
    gameOver = TRUE;
  }
  //movimento da cobra:
  cobra.x[0] = novoX;
  cobra.y[0] = novoY; 
}

void processarEntrada(){
  int tecla = getch();


  switch (tecla){
    case KEY_UP:
      if(cobra.direcaoy == 0){
        cobra.direcaoy = -1;
        cobra.direcaox = 0;
      }
       break;
      case KEY_DOWN:
        if(cobra.direcaoy == 0){
          cobra.direcaoy = 1;
          cobra.direcaox = 0;
      }
        break;
      case KEY_LEFT:
      if (cobra.direcaox == 0){
        cobra.direcaox = -1;
        cobra.direcaoy = 0;
      }
        break;
      case KEY_RIGHT:
        if (cobra.direcaox == 0){
          cobra.direcaox = 1;
          cobra.direcaoy = 0;
      }
        break;
      case 'q':
        gameOver = TRUE;
      break;
      case 'Q':
        gameOver = TRUE;
      break;
    default:
      break;
  }
}


int main() {
  setlocale(LC_ALL, ".UTF8");

  inicializar();

  // O LOOP JÁ NÃO ESTÁ VAZIO - CORRIGIDO PARA NÃO CONGELAR
  while (!gameOver) {
       
      //esperas




      // Se pressionar a tecla 'q' ou 'Q', define gameOver como TRUE para sair do loop
   
      desenhar(); // Desenha constantemente o ecrã
      atualizar(); //atualizar a posição
      processarEntrada();
      
      napms(esperaPadrao); // CORREÇÃO CRÍTICA: Dá um descanso de 100 milissegundos ao processador
  }
  
  endwin(); //limpar o terminal
  return 0;
}




/*localizar a pasta onde está o pojeto:
gcc -Wall -Wextra -g3 jogoDaCobra.c pdcurses.dll -o jogoDaCobra.exe ; .\jogoDaCobra.exe

*/

/*rodar o programa:
                  cd "C:\Users\Fernandes Caxinda\Documents\GitHub\curso-Microgenio\projetos\jogoDaCobra"
gcc -Wall -Wextra -g3 jogoDaCobra.c pdcurses.dll -o jogoDaCobra.exe ; .\jogoDaCobra.exe
*/