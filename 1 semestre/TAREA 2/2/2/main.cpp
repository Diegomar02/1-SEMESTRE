//
//  main.cpp
//  2
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
// La presión, el volumen y la temperatura de una masa de aire se relacionan por la fórmula: masa = (presión * volumen) / (0.37 * (temperatura + 460)) Obtener el valor de la masa.


#include <iostream>

int main() {
    float presion;
    float volumen;
    float temperatura;
    float total;
    printf("Vamos a sacar la masa, pero necesitamos el valor de presión, volumen y temperatura\n");
    printf("¿Cual es el valor de presión? = ");
    scanf("%f",&presion);
    printf("¿Cual es el valor de volumen? = ");
    scanf("%f",&volumen);
    printf("¿Cual es el valor de temperatura? = ");
    scanf("%f",&temperatura);
    total=(presion*volumen)/(.37*(temperatura+460));
    printf("La masa es %f",total);
    printf("\n");
}
