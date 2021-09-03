/*
    [0]     [1]     [2]    [3]     [4]
[0]  0       1       1      1       0

[1]  1       0       1      0       1

[2]  1       1       0      1       1

[3]  1       0       1      0       1

[4]  0       1       1      1       0
*/

#include <stdio.h>
#define TAM 5

int main(){
    int matriz[TAM][TAM] = {0};

    for(int linha = 0; linha < TAM; linha++){
        for(int coluna = 0; coluna < TAM; coluna++){
            if(linha == coluna || (linha + coluna) == (TAM - 1)){
                matriz[linha][coluna] = 0;
            }else{
                matriz[linha][coluna] = 1;
            }
            
        }
    }

    for(int linha = 0; linha < TAM; linha++){
        for(int coluna = 0; coluna < TAM; coluna++){
            printf("\t%d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}