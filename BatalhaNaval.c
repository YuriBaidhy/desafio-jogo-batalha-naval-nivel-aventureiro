#include <stdio.h>

#define tamanhoMatriz 10
#define tamanhoNavio 3

int main () {
    
//Representar o tabuleiro
int tabuleiro [tamanhoMatriz] [tamanhoMatriz];

//Inicializar todas os índices com "0" representando a água
    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            tabuleiro [i] [j] = 0 ;
        }
    }

//Declarar navios
int navioHorizontal [tamanhoNavio] = {3, 3, 3};
int navioVertical [tamanhoNavio] = {3, 3, 3};
int navioDiagonal1 [tamanhoNavio] = {3 ,3 ,3};
int navioDiagonal2 [tamanhoNavio] = {3 ,3 ,3};


//Definir índices iniciais dos navios
int linhaHorizontal = 2;
int colunaHorizontal = 4;

int linhaVertical = 5;
int colunavertical = 7;

int linhaDiagonal1 = 0;
int colunaDiagonal1 = 0;

int linhaDiagonal2 = 9;
int colunaDiagonal2 = 2;

//Posicionar o navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro [linhaHorizontal] [colunaHorizontal + i] = navioHorizontal [i];
        }

//Posicionar o navio Vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro [linhaVertical + i] [colunavertical] = navioVertical [i];
    }

//Posicionar o navio Diagonal1
    for (int i = 0; i < tamanhoNavio; i++) {        
        tabuleiro [linhaDiagonal1 + i] [colunaDiagonal1 + i] = navioDiagonal1 [i];
    }

//Posicionar o navio Diagonal2
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro [linhaDiagonal2 - i] [colunaDiagonal2 + i] = navioDiagonal2 [i];
    }

//Exibir Tabuleiro
    printf("TABULEIRIO BATALHA NAVAL \n");

        for (int i = 0; i < tamanhoMatriz; i++) {
            for (int j = 0; j < tamanhoMatriz; j++) {
                printf ("%d ", tabuleiro [i] [j]);
            }
            printf ("\n");
            }
        return 0;
}