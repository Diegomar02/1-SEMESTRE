//
//  main.cpp
//  6
//
//  Created by Diego Márquez on 24/09/20.
//  Determinar si un numero es primo.

#include <iostream>

int main() {
    int numero;
    int divisor=1;
    int divisores=0;
    
    printf("INGRESA EL NUMERO = ");
    scanf("%i",&numero);
    
    if (numero%divisor==0){
        divisores++;
    }
    divisor++;
    
        if (divisores==2){
            printf("Numero es primo");
        }else{
            printf("Numero no es primo");
        }
    }



