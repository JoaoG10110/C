#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, valorFinal;
    int nota10, nota5, nota2, nota1;
    int resto10, resto5, resto2;

    printf("Insira o valor do produto: R$");
    scanf("%d", &valor);

    valorFinal = valor;

    nota10 = valor/10;
    resto10 = valor%10;
    valor = valor - nota10*10;

    nota5 = valor/5;
    resto5 = valor%5;
    valor = valor - nota5*5;

    nota2 = valor/2;
    resto2 = valor%2;
    valor = valor - nota2*2;

    nota1 = valor/1;
    valor = valor - nota1*1;

    printf("Usando o minino de notas possiveis pra comprar este produto de R$%d,00 sera necessario:\n%d nota(s) de 10\n%d nota(s) de 5\n%d nota(s) de 2\n%d nota(s) de 1", valorFinal, nota10, nota5, nota2, nota1);

    return 0;
}