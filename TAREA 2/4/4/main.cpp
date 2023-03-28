//
//  main.cpp
//  4
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
// Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.


#include <iostream>

int main() {
    float salario;
    printf("¿Cual es tu salario anterior? = ");
    scanf("%f",&salario);
    printf("Tu nuevo salario es %f = ",salario*1.25);
}
