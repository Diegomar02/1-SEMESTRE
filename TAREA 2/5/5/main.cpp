//
//  main.cpp
//  5
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//  Escriba un algoritmo que imprima el costo de una llamada telefónica, capturando la duración de la llamada en minutos y conociendo que toda llamada que dure tres minutos o menos tiene un costo de $5 y que cada minuto adicional cuesta $3

#include <iostream>
int main() {
    int minutos;
    int costo=5;
    int tiempoAdicional;
    printf ("¿Cuantos minutos hablaste? = ");
    scanf("%i",&minutos);
    if (minutos<=3){
        printf("El precio es de %i",costo);
        printf("\n");
    }//FIN DEL IF
    if (minutos>=4){
        tiempoAdicional=minutos-3;
        printf("El precio es de %i",5+(tiempoAdicional*3));
        printf("\n");
    }//FIN DEL IF
}//FIN DEL PROGRAMA
