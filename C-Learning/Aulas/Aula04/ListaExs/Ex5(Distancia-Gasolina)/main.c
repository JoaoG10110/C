/*
Enzo possui um carro inteligente, seu carro indica se é ou não possível 
realizar uma viagem baseado no local de destino e na quantidade de gasolina (em litros) disponível no tanque de combustível. O algoritmo deve receber como entrada: a quantidade de gasolina, a distância até o local de destino e a média de quantos quilômetros o carro consegue fazer por litro de gasolina.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    float qtdGasolina, kmPorL, distanciaKm;
    bool vaiCompletarViagem;

    printf("Digita quantos Litros de gasolina tem no carro: ");
    scanf("%f", &qtdGasolina); //5 L

    printf("Digita quantos km/L o carro faz: ");
    scanf("%f", &kmPorL); //1km/L

    printf("Digita a distancia a ser percorrida: ");
    scanf("%f", &distanciaKm); //10 km

    vaiCompletarViagem = (qtdGasolina * kmPorL) >= distanciaKm;

    printf("Consigo completar o trajeto? %d", vaiCompletarViagem);

    return 0;
}