#include <stdio.h>
#include <stdbool.h>

int main(){
    char nome[10]; 
    int idade;
    bool ehMaiorIdades;

    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    ehMaiorIdades = idade >= 18;

    printf("Seu nome eh %s\n", nome);
    printf("Voce tem mais de 18: %d", ehMaiorIdades);
    
    return 0;
}