//
//  main.cpp
//  6
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//  En un hospital existen tres áreas: Ginecología, Pediatría, Traumatología. El presupuesto anual del hospital se reparte conforme a la siguiente tabla: Ginecologia 40%, Traumatologia 30% y pediatria 30%. Obtener la cantidad de dinero que recibirá cada área, para cualquier monto presupuestal.

#include <iostream>

int main() {
    float presupuesto;
    printf("¿Cual es el presupuesto que tiene el Hospital? = ");
    scanf("%f",&presupuesto);
    printf("El presupuesto por area es el siguientes: \n");
    printf("Ginecologia = %f",presupuesto*.40);
    printf("\nTraumatologia = %f",presupuesto*.30);
    printf("\nPediatria = %f",presupuesto*.30);
    printf("\n");
}
