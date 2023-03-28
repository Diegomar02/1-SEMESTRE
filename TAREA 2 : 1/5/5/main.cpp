//
//  main.cpp
//  5
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>
#include <stdio.h>
int main() {
    float PAG, SPA=0;
    printf("Ingres el primer: \t");
    scanf("%f",&PAG);
    do{
        SPA=SPA+PAG;
        printf("Ingrese el siguiente pago -0 para terminar:\t");
        scanf("%f",&PAG);
    }
    while (PAG);
        printf("EL total de pagos del mes es de: %.2f\n",SPA);
    
}



