#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/* #include <ctype.h> */

int main(){
    int sala1 = 1 ;
    int sala2 = 2 ;
    int sala3 = 3 ;
    int sala4 = 4 ;
    int sala5 = 5 ;
    int sala6 = 6 ;
    int sala7 = 7 ;
    int sala8 = 8 ;
    int sala9 = 9 ;
    char nomePersonagem[99];
    char caminhoPreto, caminhoVer;
    int escolha;

    printf("Bem-vindo(a) ao Labirinto.\n\nDigite o nome do seu personagem: ");
    scanf("%s", &nomePersonagem);

    printf("\n%s, voce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", nomePersonagem, sala1);
    scanf("\n%d", &escolha);
    if (escolha == 1)
    {
        printf("Voce escolheu o caminho vermelho, %s, agora voce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", nomePersonagem, sala2);
        scanf("%d", &escolha);
    }else if(escolha == 2)
    {
        printf("Voce escolheu o caminho preto, %s, agora voce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", nomePersonagem, sala3);
        scanf("%d", &escolha);
    }
    else
    {
        printf("Desculpa, voce escolheu uma alternativa incorreta ;(");
    }

    return 0;
}