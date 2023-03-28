//
//  main.cpp
//  3
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
// Convertir un número arábigo a romano, valide que el número se encuentre en el rango de 100-999 (Hacer uso de una sentencia SEGÚN).

#include <iostream>

int main() {
    int numeroPrincipal;
    int numero;
    int unidades;
    int decenas;
    int centenas;
    printf("TE DARE EL NUMERO QUE QUIERAS EN ROMANO");
    printf("\n¿Cual numero quieres saber? = ");
    scanf("%i",&numeroPrincipal);
    unidades=numeroPrincipal%10;
    numero=numeroPrincipal/10;
    decenas=numero%10;
    centenas=numero/10;
    if (numeroPrincipal>100&numeroPrincipal<=999){
    switch (unidades){
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("CDL");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCC");
            break;
        case 9:
            printf("CM");
            break;
    }
    switch (decenas){
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;

    }
    switch (centenas){
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VII");
            break;
        case 9:
            printf("IV");
            break;
    }//FIN DEL CASE CENTENAS
    printf("\n");
    }//FIN DEL IF
    else{
        printf("ESE NUMERO NO ES VALIDO");
        printf("\n");
    }//FIN DEL ELSE
}//FIN DEL PROGRAMA
