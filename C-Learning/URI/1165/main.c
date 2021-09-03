#include <stdio.h>
 
int main() {
    int num, casos, countCasos = 1;
    int resultado = 0;

    scanf("%d", &casos);
    while (countCasos <= casos){
        scanf("%d", &num);
        for (int i = 2; i <= num - 1; i++){
            if (num % i == 0){
                resultado ++;
            }    
        }
        if (resultado == 0){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }
        countCasos ++;
        resultado = 0;
    }
    return 0;
}