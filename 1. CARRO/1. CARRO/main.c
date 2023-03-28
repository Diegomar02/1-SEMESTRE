//
//  main.c
//  1. CARRO
//
//  Created by Diego Márquez on 06/10/20.
//

#include <stdio.h>

int main() {
    float vel1, vel2, dist, tiempo;
    printf("Velocidad del automovil 1 = ");
    scanf("%f",&vel1);
    printf("Velocidad del automovil 2 = ");
    scanf("%f",&vel2);
    printf("Distancia entre los automoviles = ");
    scanf("%f",&dist);
    tiempo=(dist/(vel2-vel1)*60);
    printf("El tiempo para alcanzar el auto1 es %.2f",tiempo);
    printf("\n");
}
