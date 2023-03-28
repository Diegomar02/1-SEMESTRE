
//  main.cpp
//  NUMEROMES-SWITCH
//  Created by Diego Márquez on 14/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
#include <iostream>

int main() {
    int numero;
    printf("¿QUÉ NUMERO QUIERES SABER EN MES? = ");
    scanf("%i",&numero);
    
    switch (numero){
        case 1:
            printf("EL MES ES: ENERO\n");
            break;
        case 2:
            printf("EL MES ES: FEBRERO\n");
            break;
        case 3:
            printf("EL MES ES: MARZO\n");
            break;
        case 4:
            printf("EL MES ES: ABRIL\n");
            break;
        case 5:
            printf("EL MES ES: MAYO\n");
            break;
        case 6:
            printf("EL MES ES: JUNIO\n");
            break;
        case 7:
            printf("EL MES ES: JULIO\n");
            break;
        case 8:
            printf("EL MES ES: AGOSTO\n");
            break;
        case 9:
            printf("EL MES ES: SEPTIEMBRE\n");
            break;
        case 10:
            printf("EL MES ES: OCTUBRE\n");
            break;
        case 11:
            printf("EL MES ES: NOVIEMBRE\n");
            break;
        case 12:
            printf("EL MES ES: DICIEMBRE\n");
            break;
        default:
            printf("EL NUMERO EN MES NO ES VALIDO\n");
    }//fin del switch
}//fin del programa
