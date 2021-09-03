#include <stdio.h>

/*
Desejo calcular a média final de estudantes da UAM. Sabendo que
a media é composta por N1 com peso 4 e N2 com peso 6. Crie um 
programa para ajudar este estudante desesperado! Considere
N1 como 7.00 e N2 como 8.35
*/

int main(){
    float nota1, nota2;
    printf("Digita a nota da N1: ");
    scanf("%f", &nota1);

    printf("Digita a nota da N2:");
    scanf("%f", &nota2);

    float media = ((nota1 * 0.4) + (nota2 * 0.6));
    printf("A media eh: %f", media);

    return 0;
}