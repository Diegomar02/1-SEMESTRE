//
//  main.c
//  1. CONSTRUCCIÓN
//
//  Created by Diego Márquez on 06/10/20.
// Un constructor sabe que necesita .5 metros cubicos de arena por metro cuadrado de revoque a realizar. Escribir un programa donde ingrese las medidas de una pared (Largo y alto) expresada en metros y obteneter la cantidad de arena necesaria para revolcarla

#include <stdio.h>

int main() {
    float largo, alto, total;
    
    printf("TE DIRE CUANTO NECESITAS DE ARENA\n");
    printf("\nINGRESA LOS DATOS EN METROS");
    printf("\n\n¿Cuando es de largo? = ");
    scanf("%f",&largo);
    printf("¿Cuando es de alto? = ");
    scanf("%f",&alto);
    total=largo*alto;
    printf("\nLa pared mide %.2f metros cuadrados\n",total);
    total=total/2;
    printf("Necesitas %.2f metros cubicos de arena",total);
    printf("\n\n");
}
