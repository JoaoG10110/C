#include <stdio.h>
#include <ctype.h>

int main(){
    int numeroInt;
    float numeroFloat;
    char letra;

    printf("Digite um numero: ");
    scanf("%d", &numeroInt);
    numeroFloat = numeroInt;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = toupper(letra);

    if (letra == 'A'){
        if (numeroInt % 2 == 0){
            numeroInt *= 2;
            printf("%d %c", numeroInt, letra);

        }
        else{
            numeroFloat /= 2;
            printf("%.1f %c", numeroFloat, letra);

        }    
    }else if (letra == 'B'){
        numeroFloat = numeroFloat * 0.4;
        printf("%.2f %c", numeroFloat, letra);

    }else if (letra == 'C'){
        numeroInt = numeroInt*numeroInt;
        printf("%d %c", numeroInt, letra);
        
    }else{
        printf("%d %c", numeroInt, letra);

    }
    
    
    return 0;
}