#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/* #include <ctype.h> */

int main(){
    int sala = 1 ;
    char nomePersonagem[99];
    char caminhoPreto, caminhoVer;
    int escolha;
    int contador = 0;

    printf("Bem-vindo(a) ao Labirinto.\n\nDigite o nome do seu personagem: ");
    scanf("%s", &nomePersonagem);


    while (sala <= 8){
        printf("\n%s, voce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", nomePersonagem, sala);
        scanf("\n%d", &escolha);
        if (escolha == 1)
        {
            printf("Voce escolheu o caminho vermelho, %s.", nomePersonagem);
            sala ++;
        }else if(escolha == 2)
        {
            printf("Voce escolheu o caminho preto, %s.", nomePersonagem);
            sala += 2;
        }
        else{
            printf("Desculpa, voce escolheu uma alternativa incorreta ;(");
        }
        contador += 1;
        printf("\ninteracoes:%d", contador);
    }

    if (contador >= 7){
        printf("Puts, que pena... voce levou %d interacoes pra chegar na sala 9. Voce PERDEU ;(", contador);
    }else{
        printf("PARABENS %s !! Voce chegou na sala 9 com apenas %d interacoes. Voce GANHOU !!!", nomePersonagem, contador);
    }

    return 0;
}