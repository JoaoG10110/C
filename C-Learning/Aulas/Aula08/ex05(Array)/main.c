#include <stdio.h>

/*
Armazene em um array os 100 primeiros números ímpares.
Após isso, o algoritmo deve exibir todos os valores armazenados.
*/

int main(){
    int numArray[100];

    for (int indice = 0; indice <= 99; indice++){
        printf("Digite um numero: ");
        scanf("%d", &numArray[indice]);

        if (numArray[indice] % 2 == 0){
            indice--;
        }    
    }
    
    for (int i = 0; i <= 99; i++){
        printf("%d ", numArray[i]);
    }

    return 0;
}