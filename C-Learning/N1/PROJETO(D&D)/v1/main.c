#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    char sala1 = '1';
    char nomePersonagem;
    char caminhoPreto, caminhoVer;
    int escolha;

    printf("Bem-vindo(a) ao Labirinto.\n\nDigite o nome do seu personagem: ");
    scanf("%s", &nomePersonagem);

    printf("\n%s, voce esta na sala: 1\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto", &nomePersonagem);
    scanf("%d", &escolha);
    if (escolha == 1)
    {
        /* code */
    }else
    {
        /* code */
    }
    
    
    char sala2 = '2';

    return 0;
}