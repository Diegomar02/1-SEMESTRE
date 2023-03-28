//
//  main.cpp
//  3
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>

int main(void) {
    float PAG,SPA;
    SPA=0;
    printf("Ingrese el primer pago:\t");
    scanf("%f",&PAG);
    while (PAG>0) {
        SPA=SPA+PAG;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f",&PAG);
    }
    printf("El total de pagos del mes es: %.2f\n",SPA);
}
