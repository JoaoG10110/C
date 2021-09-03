/*
Joãozinho está muito cansado de ter que participar das outras questões, dessa vez Irineu que será nosso protagonista.

Irineu irá entrar em uma escola de magia e bruxaria, nesta escola os alunos são separados em casas de acordo com suas características.

Considere os atributos:
• Coragem
• Inteligência
• Destreza
• Compaixão
 Considere as regras:
 Caso o aluno possuir todos os atributos ele irá para a casa vermelha;
 Caso o aluno possuir todos os atributos, exceto coragem, ele irá para a casa azul;
 Caso o aluno possuir todos os atributos, exceto compaixão, ele irá para a casa verde;
 Em todos os outros casos o aluno irá para a casa amarela;

 O chapéu selecionador que é colocado na cabeça de todo aluno ingressante pergunta ao aluno se ele possui cada um dos atributos, o aluno deve responder ‘S’ (para sim) ou ‘N’(para não), como resultado, o chapéu selecionador responde na seguinte sintaxe (baseando-se nas respostas):
Casa vermelha: falso
Casa azul: verdadeiro
Casa verde: falso
Casa amarela: falso
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    char destreza, compaixao, inteligencia, coragem;
    bool temDestreza, temCompaixao, temInteligencia, temCoragem;

    printf("Irineu, infomre S se voce tem destreza ou N caso nao tenha: ");
    scanf(" %c", &destreza);

    printf("Irineu, infomre S se voce tem compaixao ou N caso nao tenha: ");
    scanf(" %c", &compaixao);

    printf("Irineu, infomre S se voce tem inteligencia ou N caso nao tenha: ");
    scanf(" %c", &inteligencia);

    printf("Irineu, infomre S se voce tem coragem ou N caso nao tenha: ");
    scanf(" %c", &coragem);

    temDestreza = destreza == 'S' || destreza == 's';
    temCompaixao = compaixao == 'S' || compaixao == 's';
    temInteligencia = inteligencia == 'S' || inteligencia == 's';
    temCoragem = coragem == 'S' || coragem == 's';

    printf("\nTem destreza: %d", temDestreza);
    printf("\nTem compaixao: %d", temCompaixao);
    printf("\nTem inteligencia: %d", temInteligencia);
    printf("\nTem coragem: %d", temCoragem);

    return 0;
}