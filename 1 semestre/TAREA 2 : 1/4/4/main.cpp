//
//  main.cpp
//  4
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void) {
    int NUM;
    long CUA,SUC=0;
    printf("Ingrese un numero entero -0 para terminar:\t");
    scanf("%d",&NUM);
    while (NUM>0) {
        CUA=pow(NUM, 2);
        printf("%d al cubo es %ld",NUM,CUA);
        SUC=SUC+CUA;
        printf("\nIngrese un numero entero -0 para terminar:\t");
        scanf("%d",&NUM);
    }
    printf("La suma de los cuadrados es %ld\n",SUC);
}
