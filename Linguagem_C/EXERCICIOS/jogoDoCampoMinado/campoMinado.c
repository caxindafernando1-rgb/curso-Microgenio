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
        printf("    %d", l);//indices das colunas
    printf("\n\t    ---------------------------------------------------\n");
    for(l = 0; l < tam; l++){
        printf("\t%d ", l);//indices das linhas
        printf("  | ");
        for (c = 0; c < tam; c++){
            if(jogo[l][c].estaAberta){
                if(jogo[l][c].eBomba)
                    printf("*");
                else
                    printf(" %d ", jogo[l][c].vizinhos);
        }else
                printf("  ");
        printf(" | ");
        }
    printf("\n\t    ---------------------------------------------------\n");
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



//Procedimento jogo que faz a leitura dass coodenadas
void jogar(){
   int linha, coluna;
    do{
    printf("\nDIGITE AS COORDENADAS: ");
    printf("Linha: ");
    scanf("%d", &linha);
    printf("Coluna: ");
    scanf("%d", &coluna);

    if(coordenadaEhValida(linha, coluna) == 0)
        printf("\nCOODENADA INVALIDA!");
        printf("\nTENTE NOVAMENTE.");
    }while (coordenadaEhValida(linha, coluna) == 0 || jogo[linha][coluna].estaAberta == 1);

    abrirCelula(linha, coluna);
}

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");   


    inicializarJogo();
    sortearBombas(10);
    printf("\n\n\t\t\t == CAMPO MINADO == ");
    imprimir();


 return 0;
}
