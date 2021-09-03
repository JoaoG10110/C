#include <stdio.h>
/*
Escreva um algoritmo que leia 10 números e informe quantos números entre 10 e 20 foram
digitados. 
*/

int main(){
    int contador = 1;
    int num10e20 = 0;

    while (contador <= 10){
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20){
            num10e20 += 1;
        }
        
        contador++;
    }

    printf("%d numeros foram entre 10 e 20.", num10e20);

    return 0;
}