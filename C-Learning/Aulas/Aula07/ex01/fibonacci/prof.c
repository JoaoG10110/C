#include <stdio.h>

//autor = professor 

int main() {
    int penultimo = 1, ultimo = 1, aux = 0;
    int n;
    
    printf("Digite quantos termos de Fibonacci voce deseja que sejam exibidos: ");
    scanf("%d", &n);

    for(int contador = 1; contador <= n; contador ++){
        if(contador <= 2){
            printf("%d ", ultimo);
        }else{
            aux = penultimo + ultimo;
            penultimo = ultimo;
            ultimo = aux;
            printf("%d ", ultimo);
        }
    }
    return 0;
}