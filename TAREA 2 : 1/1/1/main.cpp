//
//  main.cpp
//  1
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>
#include <stdio.h>


int main(void) {
    int I;
    float SAL = 0.0,NOM = 0.0;
    
    for (I=1;I<=15;I++){
        printf("Ingrese el salario del profesor %d: \t",I);
        scanf("%f",&SAL);
        NOM=NOM+SAL;
    }
    printf("El total de la nomina es : %.2f\n",NOM);
}
