#include <stdio.h>

int main(){
    char vetorInteiros[10][99];

    for(int contador = 0; contador < 5; contador++){
        scanf("%s", &vetorInteiros[contador]);
    }

    printf("\nPalavras: \n");

    for(int contador = 0; contador < 10; contador++){
        printf("\n%s", vetorInteiros[contador]);
    }

    return 0;
}