//
//  main.cpp
//  8
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
// Capture el número del mes y día de nacimiento de una persona e imprima su signo zodiacal (Hacer uso de una sentencia SEGÚN)

#include <iostream>

int main() {
    int dia;
    int mes;
    printf("TU SIGNO ZODIACAL");
    printf("\n¿Cual es tu dia de nacimiento? = ");
    scanf("%i",&dia);
    printf("¿En que mes naciste? ej (1,2,3) = ");
    scanf("%i",&mes);
    
    switch (mes){
        case 1:
            if (dia<=20){
                printf("Tu signo es = Capricornio");
            }
            if (dia>=21){
                printf("Tu signo es = Acuario");
            }
            break;
        case 2:
            if (dia<=19){
                printf("Tu signo es = Acuario");
            }//FIN IF MES 2 ACUARIO
            if (dia>=20){
                printf("Tu signo es = Piscis");
            }
            break;
        case 3:
            if (dia<=20){
                printf("Tu signo es = Piscis");
            }
            if (dia>=21){
                printf("Tu signo es = Aries");
            }
            break;
        case 4:
            if (dia<=20){
                printf("Tu signo es = Aries");
            }
            if (dia>=21){
                printf("Tu signo es = Tauro");
            }
            break;
        case 5:
            if (dia<=20){
                printf("Tu signo es = Tauro");
            }
            if (dia>=21){
                printf("Tu signo es = Geminis");
            }
            break;
        case 6:
            if (dia<=20){
                printf("Tu signo es = Geminis");
            }
            if (dia>21){
                printf("Tu signo es = Cancer");
            }
            break;
        case 7:
            if (dia<20){
                printf("Tu signo es = Cancer");
            }
            if (dia>=21){
                printf("Tu signo es = Leo");
            }
            break;
        case 8:
            if (dia<=20){
                printf("Tu signo es = Leo");
            }
            if (dia>=21){
                printf("Tu signo es = Virgo");
            }
            break;
        case 9:
            if (dia<=20){
                printf("Tu signo es = Virgo");
            }
            if (dia>=21){
                printf("Tu signo es = Libra");
            }
            break;
        case 10:
            if (dia<=20){
                printf("Tu signo es = Libra");
            }
            if (dia>=21){
                printf("Tu signo es = Escorpion");
            }
            break;
        case 11:
            if (dia<=20){
                printf("Tu signo es = Escorpion");
            }
            if (dia>=21){
                printf("Tu signo es = Sagitario");
            }
            break;
        case 12:
            if (dia<=20){
                printf("Tu signo es = Sagitario");
            }
            if (dia>=21){
                printf("Tu signo es = Capricornio");
            }
            break;
        }//FIN SWITCH
    printf("\n");
}//FIN DEL PROGRAMA
