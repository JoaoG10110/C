#include <stdio.h>
#include <stdlib.h>

//Solicite ao usuário dois números inteiros, x e y. Após isso, mostre todos os números ímpares entre estes dois números.

int main(){
    int x, y;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("Digite mais um: ");
    scanf("%d", &y);

    int i;
    if (x > y){
        for (i = y; i < x; i++){
            if (i % 2 == 1){
                printf("%d ", i);
            }
        }
    }else{
        for (i = x; i < y; i++){
            if (i % 2 == 1){
                printf("%d ", i);
            }
        }
    }

    return 0;
}