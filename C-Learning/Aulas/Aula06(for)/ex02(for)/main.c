#include <stdio.h>
#include <stdlib.h>

//"Faça um algoritmo que leia cinco números positivos inteiros e informe o maior e  menor número dentre os cinco digitados."

int main(){
    int num, maior, menor;

    printf("Digite um numero positivo inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;
    for (int i = 0; i < 4; i++){
        printf("Digite um numero positivo inteiro: ");
        scanf("%d", &num);

        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
    }
    printf("O maior numero eh o %d, e o menor eh o %d", maior, menor);

    return 0;
}