#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O numero que vc escolheu eh par");
    }
    else
    {
        printf("O numero que vc escolheu eh impar");
    }
    
    return 0;
}