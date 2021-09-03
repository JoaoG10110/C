#include <stdio.h>
#include <stdbool.h>

int main(){
    int qtdJogadas = 0;
    int salaAtual = 0;
    char opcaoEscolhida = 'E';

    while(qtdJogadas < 3 && (opcaoEscolhida == 'E' || opcaoEscolhida == 'D')){
        printf("Escolha a sala da [D]ireita ou a sala da [E]squerda - Voce esta na sala %d", salaAtual);
        scanf(" %c", &opcaoEscolhida);

        if(opcaoEscolhida == 'D'){

        }
        else if(opcaoEscolhida == 'E'){           

        }
    }
    
    return 0;
}