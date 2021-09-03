#include <stdio.h>
 
int main() {
    float numero, media = 0, numPositivos = 0;
    int countPositivos = 0;

    for (int contador = 0; contador < 6; contador++){
        scanf("%f", &numero);
        if (numero > 0){
            countPositivos++;
            numPositivos = numPositivos + numero;
        }
    }
    media = numPositivos / countPositivos;

    printf("%d valores positivos\n", countPositivos);
    printf("%.1f\n", media);
 
    return 0;
}