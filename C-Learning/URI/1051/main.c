#include <stdio.h>
 
int main() {
    float salario, imposto, aux1 = 2000, aux2 = 1000, aux3 = 1500;

    scanf("%f", &salario);

    if (salario >= 0 && salario <= 2000){
        imposto = 0;
    }else if (salario > 2000 && salario <= 3000){
        imposto = 0.08 * (salario - aux1);
    }else if (salario > 3000 && salario <= 4500){
        imposto = (0.08 * (salario - aux1)) + (0.18 * (salario - aux1 - aux2));
    }else if (4500 < salario){
        imposto = (0.08 * (salario - aux1)) + (0.18 * (salario - aux1 - aux2)) + (0.28 *(salario - aux1 - aux2 - aux3));
    }
    
    if (imposto == 0){
        printf("Isento");
    }else{
        printf("R$ %.2f", imposto);
    }
    
    return 0;
}