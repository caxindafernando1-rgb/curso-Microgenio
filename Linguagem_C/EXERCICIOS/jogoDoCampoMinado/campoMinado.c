 #include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <time.h>

/*                                             
                                                                                  JOGO DO CAMPO MINADO
*/

/*
          CELULA
          eBompa 0 ou 1
          estaAberta 0 ou 1
          vizinhos 0 a 4 
*/
typedef struct{

    int eBomba;
    int estaAberta;
    int vizinhos;

}Celula;


Celula jogo[10][10];
int l, c, tam = 10;

//Procedimimento para inicializar a matriz do jogo
void inicializarJogo(){
    for(l = 0; l < tam; l++){
        for (c = 0; c < tam; c++){
            jogo[l][c].eBomba = 0;
            jogo[l][c].estaAberta = 0;
            jogo[l][c].vizinhos = 0;
        }
    }
}

//Procedimento para sortear n bombas
void sortearBombas(int n){

    srand(time(NULL));

    for ( int i = 0; i < n; i++){
        l = rand() % tam;
        c = rand() % tam;
        if (jogo[l][c].eBomba == 0)
            jogo[l][c].eBomba = 1;
        else
            i--;
    }
}


/*
    fução que diz se um par de coodenadas é valido ou não
    1 - é valido
    0 - não é valido
*/
int coordenadaEhValida(int l, int c){
    if (l >= 0 && l < tam && c >= 0 && c < tam)
        return 1;
    else
        return 0;
    
}


/*  função que retorna a quantidade de bombas na vizinhança de l c
    n = quentidades de bombas
*/
int quantBombasvizinhas(int l, int c){
    /*
        l - 1 e c posição superior/cima
        l + 1 e c posição inferior/baixo
        l e c + l direita
        l e c - 1 esquerda
    */
   int quantidade = 0;

   if (coordenadaEhValida(l - 1, c) && jogo [l - 1][c].eBomba)
        quantidade++;   
   if (coordenadaEhValida(l + 1, c) && jogo [l + 1][c].eBomba)
        quantidade++; 
     if (coordenadaEhValida(l, c + 1) && jogo [l][c + 1].eBomba)
        quantidade++; 
     if (coordenadaEhValida(l, c - 1) && jogo[l][c - 1].eBomba)
        quantidade++; 
    return quantidade;            
}


//Procedimento para contar as bombas vizinhas
void contarBombas(){
    for(l = 0; l < tam; l++){
        for (c = 0; c < tam; c++)
            jogo[l][c].vizinhos = quantBombasvizinhas(l, c);

      
    }
}

//Procedimento para imprimir jogo
void imprimir(){

    printf("\n\n\t   ");
    for (l = 0; l < tam; l++)
        printf("    %2d", l);//indices das colunas
    printf("\n\t    ------------------------------------------------------------\n");
    for(l = 0; l < tam; l++){
        printf("\t%2d ", l);//indices das linhas
        printf("  | ");
        for (c = 0; c < tam; c++){
            if(jogo[l][c].estaAberta){
                if(jogo[l][c].eBomba)
                    printf("*");
                else
                    printf(" %d ", jogo[l][c].vizinhos);
        }else
                printf(" . ");
        printf(" | ");
        }
    printf("\n\t    -------------------------------------------------------------\n");
    }
    printf("\n\n");
}


//Procedimento para abrir a coodenada digitada pelo usuario
void abrirCelula(int l, int c){
    if (coordenadaEhValida(l, c) == 1 && jogo[l][c].estaAberta == 0){ 
        jogo[l][c].estaAberta = 1;
        if (jogo[l][c].vizinhos == 0){
            /*
                l - 1 e c posição superior/cima
                l + 1 e c posição inferior/baixo
                l e c + l direita
                l e c - 1 esquerda
            */
            abrirCelula(l - 1, c);
            abrirCelula(l + 1, c);
            abrirCelula(l, c - 1);
            abrirCelula(l, c + 1);
        }
    }
    
}


/*
    Função para verificar vitória
    1 - Ganhou
    0 - Não ganhou
*/
int ganhou(){
    int quantidade = 0;

     for(l = 0; l < tam; l++){
        for (c = 0; c < tam; c++){
            if (jogo[l][c].estaAberta == 0 && jogo[l][c].eBomba == 0)
                quantidade++;
        }
    }
    return quantidade;
}



//Procedimento jogo que faz a leitura dass coodenadas
void jogar(){
   int linha, coluna;
   int perdeu = 0; // Variável de controlo local para a derrota

   do {
        imprimir();
        do {
            printf("\nDIGITE AS COORDENADAS: ");
            printf("\nLinha: ");
            scanf("%d", &linha);
            printf("\nColuna: ");
            scanf("%d", &coluna);

            if(coordenadaEhValida(linha, coluna) == 0 || jogo[linha][coluna].estaAberta == 1) {
                printf("\nCOORDENADA INVALIDA OU JA ABERTA!");
                printf("\nTENTE NOVAMENTE.");
            }
        } while (coordenadaEhValida(linha, coluna) == 0 || jogo[linha][coluna].estaAberta == 1);

        // 1. Verifica se pisou numa bomba ANTES de abrir ou expandir
        if (jogo[linha][coluna].eBomba == 1) {
            perdeu = 1;
            jogo[linha][coluna].estaAberta = 1; // Abre a bomba para mostrar no ecrã
        } else {
            abrirCelula(linha, coluna);
        }

    // O jogo continua enquanto restarem células seguras (ganhou() > 0) E o jogador não tiver perdido
    } while (ganhou() != 0 && perdeu == 0);

    // Impressão final com o resultado do último movimento
    imprimir();

    //  Apresenta o resultado baseado na variável de controlo
    if (perdeu) {
        printf("\n\t WHAT THAT HELL!!!.\nGAME OVER\n");
    } else {
        printf("\n\tYOU WIN!!!\n");
    }
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");   
    int opcao;
    do{
    inicializarJogo();
    sortearBombas(10);
    contarBombas();
    printf("\n\n\t\t\t == CAMPO MINADO == ");
    jogar();
        

    printf("\nDigite 1 para jogar novamente! ");
    scanf(" %d", &opcao);

    }while (opcao == 1);

 return 0;
}
