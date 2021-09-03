/*
    [0]     [1]     [2]
[0]  1       0       0

[1]  1       1       0

[2]  1       1       1
*/

/*
  linha == 0  & coluna == 0 então-valor 1  
  linha == 1  & coluna == 0 então-valor 1  
  linha == 2  & coluna == 0 então-valor 1

  linha == 1  & coluna == 1 então-valor 1  
  linha == 2  & coluna == 1 então-valor 1  
  
  linha == 2  & coluna == 2 então-valor 1
*/

#include <stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM] = {0};

    for(int linha = 0; linha < TAM; linha++){
        for(int coluna = 0; coluna < TAM; coluna++){
            if(linha >= coluna){
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