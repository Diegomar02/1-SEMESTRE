//
//  main.cpp
//  9
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//  Se desea conocer si un año es bisiesto. Nota: Un año es bisiesto si cumple los siguientes criterios: Es bisiesto si es divisible entre 4. Pero no es bisiesto si es divisible entre 100. Pero sí es bisiesto si es divisible entre 400. (2000 y 2400 sí son bisiestos son divisibles entre 100 pero también entre 400.


#include <iostream>

int main() {
    int anno;
    int res;
    int res1;
    int res2;
    printf("Ingresa el año para saber si es bisiesto o no = ");
    scanf("%i",&anno);
    res=anno%4;
    res1=anno%100;
    res2=anno%400;
    if (res==0&res1==0&res2==0){
        printf("El años es bisiesto");
    }
    else {
        printf("El año no es bisiesto");
    }
    printf("\n");
}
