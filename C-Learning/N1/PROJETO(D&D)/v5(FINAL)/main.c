#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/*
Joao Gabriel de Maio Mota / RA:21570804
Matheus Andre da Silva / RA:21587008
Julia Nunes Leao / RA:21530126
Giuliano Dagosto Neto / RA:21534176
*/

int main(){
    int sala = 1;
    char nomePersonagem[99];
    char caminhoPreto, caminhoVer;
    int escolha;
    int contador = 0;

    printf("Bem-vindo(a) ao Labirinto.\n\nDigite o nome do seu personagem: ");
    scanf("%s", &nomePersonagem);

    printf("\nINSTRUCOES:\n- Voce entrou em um labirinto e tera que sair dele escolhendo entre dois caminhos: Preto e Vermelho.\n- Seu tempo esta acabando, escape o mais rapido possivel.\n- OBJETIVO: Tente sair vivo do Labirinto...\n");


    while (sala <= 8){
        printf("\nVoce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", sala);
        scanf("\n%d", &escolha);
        if (sala == 6 && escolha == 1)
        {
            printf("Infelizmente o caminho vermelho da sala 6 foi destruido, voce tera que passar pelo caminho preto...");
            sala += 2;
        }
        else if (escolha == 1)
        {
            printf("\nVoce escolheu o caminho vermelho, %s.", nomePersonagem);
            sala ++;
        }else if(escolha == 2)
        {
            printf("\nVoce escolheu o caminho preto, %s.", nomePersonagem);
            sala += 2;
        }
        else{
            printf("\nDesculpa, voce escolheu uma alternativa incorreta ;(");
            contador -= 1;
        }
        contador += 1;
        printf("\nInteracoes: %d", contador);
    }

    while (sala == 10){
        int portal;
        srand(time(NULL));
        portal = 5 + rand() % 5;
        
        sala = sala - portal;
        printf("\nVoce entrou em um portal, ele te enviou de volta para a sala %d.", sala);

        while (sala <= 8){
            printf("\nVoce esta na sala: %d\nEscolha seu caminho:\n[1] - Caminho vermelho\n[2] - Caminho preto\n", sala);
            scanf("\n%d", &escolha);
            if (sala == 6 && escolha == 1)
            {
                printf("Infelizmente o caminho vermelho da sala 6 foi destruido, voce tera que passar pelo caminho preto...");
                sala += 2;
            }
            else if (escolha == 1)
            {
                printf("\nVoce escolheu o caminho vermelho, %s.", nomePersonagem);
                sala ++;
            }else if(escolha == 2)
            {
                printf("\nVoce escolheu o caminho preto, %s.", nomePersonagem);
                sala += 2;
            }
            else{
                printf("\nDesculpa, voce escolheu uma alternativa incorreta ;(");
                contador -= 1;
            }
            contador += 1;
            printf("\nInteracoes: %d", contador);
        }
        
    }
    
    if (contador >= 7){
        printf("\nPuts, que pena... voce demorou muito pra chegar na sala 9 e escapar, as criaturas misticas do labirinto te achou e te raptou. Voce PERDEU ;(", contador);
    }else{
        printf("\nPARABENS, %s !! Voce chegou na sala 9 com apenas %d interacoes. Voce GANHOU e conseguiu escapar do Labirinto vivo!!!", nomePersonagem, contador);
    }

    return 0;
}
