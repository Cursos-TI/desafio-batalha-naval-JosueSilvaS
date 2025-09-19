#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int nav_dig1[3] = {3,3,3};
    int nav_diag[3] = {3,3,3};

    int nav_hrt [3] = {3,3,3};
    int nav_vtc [3] = {3,3,3};




    int tabuleiro [10][10] ={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        
    };
    //diagonal1

   // tabuleiro[0][9] = 3;
   // tabuleiro[1][8] = 3;
    //tabuleiro[2][7] = 3;

    // for( int i = 0, j = 9 ; i < 3 && j > 6; i++ , j--){
    //     for (int x = 0; x < 3; i++)
    //     {
    //         tabuleiro[i][j] = nav_dig1[x];
    //     }
        
    // }
    for(int x = 0 ; x < 3; x++){
        for( int i = 0, j = 9 ; i < 3 && j > 6; i++ , j--){
            tabuleiro[i][j] = nav_dig1[x];
        }
    }

    // diag 2
     for(int x = 0 ; x < 3; x++){
        for( int i = 0, j = 0 ; i < 3 && j < 3; i++ , j++){
            tabuleiro[i][j] = nav_diag[x];
        }
    }



    // navio horizontal
    for(int i = 1 , j = 0 ; i < 4 && j < 3; i++ , j++){
        int linha = 8;
        tabuleiro[linha][i] = nav_hrt[j];

    }
    
    //navio vertical
    for(int i = 4 , j = 0; i < 7 && j < 3 ; i++ , j++){
        int coluna = 5;
        tabuleiro[i][coluna] = nav_vtc[j];

    }

    for(int i = 0; i < 10 ; i++){
        for(int j = 0; j < 10; j++){
            printf(" %d ",tabuleiro[i][j]);
           
        }
        printf("\n");
    }

   


    return 0;
}
