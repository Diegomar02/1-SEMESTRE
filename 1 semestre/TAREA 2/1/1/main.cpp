//
//  main.cpp
//  1
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//

#include <iostream>

int main() {
    float pesos;
    float dolar;
    float total;
    printf("¿Cuando pesos quieres saber en dolares? = ");
    scanf("%f",&pesos);
    printf("¿Cual es el valor de dolar? = ");
    scanf("%f",&dolar);
    total=pesos/dolar;
    printf("Serian %f dolares",total);
    printf("\n");
}
