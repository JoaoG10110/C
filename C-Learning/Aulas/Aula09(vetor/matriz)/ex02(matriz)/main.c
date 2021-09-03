/*
Faça um algoritmo que sorteie 15 valores inteiros 
(entre 0 e 500), armazene-os em uma matriz 3x5 e 
exiba a matriz. Depois disso, troque todos os elementos
 da matriz que sejam maiores do que 100 pelo valor zero e 
 exiba matriz novamente.
*/

#include <stdio.h>
#include <time.h>

#define TAM_LIN 3
#define TAM_COL 5

int main(){
    srand(time(NULL));
    int matrizInteiros[TAM_LIN][TAM_COL];

    for(int linha = 0; linha< TAM_LIN; linha++){
        for(int coluna = 0; coluna < TAM_COL; coluna++){
            matrizInteiros[linha][coluna] = rand() % 501;
        }
    }

    for(int linha = 0; linha < TAM_LIN; linha++){
        for (int coluna = 0; coluna < TAM_COL; coluna++){
            printf("\t%d", matrizInteiros[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nApos avaliacao\n");
    for(int linha = 0; linha< TAM_LIN; linha++){
        for(int coluna = 0; coluna < TAM_COL; coluna++){
            if(matrizInteiros[linha][coluna] > 100){
                matrizInteiros[linha][coluna] = 0;
            }
        }
    }

    for(int linha = 0; linha < TAM_LIN; linha++){
        for (int coluna = 0; coluna < TAM_COL; coluna++){
            printf("\t%d", matrizInteiros[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}