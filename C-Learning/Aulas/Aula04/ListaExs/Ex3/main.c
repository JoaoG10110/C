#include <stdio.h>

int main(){
    char nome; 
    int idade;
    printf("Qual o seu nome? ");
    scanf("%s", &nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Seu nome eh %s\n", &nome);

    if (idade >=18)
    {
        printf("Sua idade eh igual a 18: 1");
    }
    else
    {
        printf("Sua idade eh igual a 18: 0");
    }
    
    return 0;
}