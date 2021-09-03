#include <stdio.h>


int main(){
    int matriz[3][3] = {0};
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if(linha == coluna){
                matriz[linha][coluna] = 1;
            }
        }
    }

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("\t%d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}