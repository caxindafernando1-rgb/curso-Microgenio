


#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <time.h>
#include "curses.h"

#define Largura 40
#define altura 20
#define tamanho_max 100
#define esperaPadrao 100
#define PAREDE '#'
#define COBRA '@'
#define COMIDA '%'
#define COR_COBRA 1
#define COR_COMIDA 2
#define COR_PAREDE 3


// Cobra:
typedef struct {
  int x[tamanho_max];
  int y[tamanho_max];
  int comprimento;
  int direcaox;
  int direcaoy;
} Cobra;

typedef struct {
  int x;
  int y;
}Comida;


Cobra cobra;
Comida comida;
bool gameOver = FALSE;
int score = 0;


char bufferDaTela[altura][Largura];

//Prototipos das funções:
void gerarComida();
void inicializar();
void desenhar();
void atualizar();
void processarEntrada();


int main() {
  setlocale(LC_ALL, ".UTF8");
  srand(time(NULL));

  inicializar();

  // O LOOP JÁ NÃO ESTÁ VAZIO - CORRIGIDO PARA NÃO CONGELAR
  while (!gameOver) {
      processarEntrada();
      atualizar(); //atualizar a posição
      desenhar(); // Desenha constantemente o ecrã

      napms(esperaPadrao); // CORREÇÃO CRÍTICA: Dá um descanso de 100 milissegundos ao processador
  }

  endwin(); //limpar o terminal
  return 0;
}



//posição da comida:
void gerarComida(){
    comida.x = rand() % ( Largura - 3) + 1;
    comida.y = rand() % (altura - 3) + 1;
}

void inicializar(){
    initscr();            
    cbreak();             
    noecho();             
    keypad(stdscr, TRUE); 
    curs_set(0);          
    start_color();        
    nodelay(stdscr, TRUE); // IMPORTANTE: diz ao getch() para não ficar travado

    init_pair(COR_COBRA, COLOR_GREEN, COLOR_BLACK);
    init_pair(COR_COMIDA, COLOR_RED, COLOR_BLACK);
    init_pair(COR_PAREDE, COLOR_YELLOW, COLOR_BLACK);

    //cabeça da cobra
    cobra.comprimento = 1;
    cobra.x[0] = Largura / 2;
    cobra.y[0] = altura / 2;
    cobra.direcaox = 1;
    cobra.direcaoy = 0;

   gerarComida();

    // Cria as bordas do retângulo do jogo
    for (int i = 0; i < altura; i++){
      for (int j = 0; j < Largura; j++){
        if(i == 0 || i == altura - 1 || j == 0 || j == Largura - 1){
          bufferDaTela[i][j] = PAREDE; 
        } else {
          bufferDaTela[i][j] = ' '; 
        }
      }
    }
}

void desenhar(){
//a cobra se move sem crescer infinitamente:
    for (int i = 1; i < altura - 1; i++){
      for (int j = 1; j < Largura -1 ; j++){
          bufferDaTela[i][j] = ' '; 
      }
    }

    bufferDaTela[comida.y][comida.x] = COMIDA;
  //desenhar a cobra
 for (int i = 0; i < cobra.comprimento; i++){
  int x = cobra.x[i];
  int y = cobra.y[i];
  bufferDaTela[y][x] = COBRA;
 }

  for (int i = 0; i < altura; i++){
    for (int j = 0; j < Largura; j++){
      if (bufferDaTela[i][j] == PAREDE){
        attron(COLOR_PAIR(COR_PAREDE));
        mvaddch(i, j, bufferDaTela[i][j]);
        attroff(COLOR_PAIR(COR_PAREDE));
      }else if(bufferDaTela[i][j] == COBRA){
        attron(COLOR_PAIR(COR_COBRA));
        mvaddch(i, j, bufferDaTela[i][j]);
        attroff(COLOR_PAIR(COR_COBRA));
      }else if(bufferDaTela[i][j] == COMIDA){
        attron(COLOR_PAIR(COR_COMIDA));
        mvaddch(i, j, bufferDaTela[i][j]);
        attroff(COLOR_PAIR(COR_COMIDA)); 
    }else{
      mvaddch(i, j, bufferDaTela[i][j]);
    }
  }
}
  mvprintw(altura, 0, "Score: %02d", score);
  refresh(); 
}

void atualizar(){
 
  int novoX = cobra.x[0] + cobra.direcaox;
  int novoY = cobra.y[0] + cobra.direcaoy;
  
  //tetectar colizão
  if(novoX <=  0 || novoX >= Largura -1 || novoY <= 0 || novoY >= altura - 1){
    gameOver = TRUE;
    return;
  }
  

    // Detetar se morde o próprio corpo
  for (int i = 1; i < cobra.comprimento; i++) {
      if (novoX == cobra.x[i] && novoY == cobra.y[i]) {
          gameOver = TRUE;
          return;
      }
    }

  if(novoX == comida.x && novoY == comida.y){
      cobra.comprimento++;
      score =+ 10 ;
      gerarComida();
  }

  // 2. CORREÇÃO CRÍTICA: Mover o corpo ANTES de checar a comida e atualizar a cabeça
  for(int i = cobra.comprimento - 1; i > 0; i--){
      cobra.x[i] = cobra.x[i - 1];
      cobra.y[i] = cobra.y[i - 1];
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


/*localizar a pasta onde está o pojeto:
gcc -Wall -Wextra -g3 jogoDaCobra.c pdcurses.dll -o jogoDaCobra.exe ; .\jogoDaCobra.exe

*/

/*rodar o programa:
                  cd "C:\Users\Fernandes Caxinda\Documents\GitHub\curso-Microgenio\projetos\jogoDaCobra"
gcc -Wall -Wextra -g3 jogoDaCobra.c pdcurses.dll -o jogoDaCobra.exe ; .\jogoDaCobra.exe
*/