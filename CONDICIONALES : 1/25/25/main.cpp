//
//  main.cpp
//  25
//
//  Created by Diego Márquez on 20/10/20.
//

#include <iostream>

int main() {
    int horasR, minutosR, segundosR, horasC, minutosC, segundosC, totalHoras, totalMinutos, totalSegundos;
    printf("Te pedire la hora actual");
    printf("\nDame la hora = ");
    scanf("%i",&horasR);
    printf("Dame los minutos = ");
    scanf("%i",&minutosR);
    printf("Dame los segundos = ");
    scanf("%i",&segundosR);
    if (horasR<=24&&minutosR<=60&&segundosR<=60){
        printf("La hora que me diste en HH:MM:SS es = %i:%i:%i",horasR,minutosR,segundosR);
        printf("\n\nDame el tiempo de cocción");
        printf("\nDame la hora = ");
        scanf("%i",&horasC);
        printf("Dame los minutos = ");
        scanf("%i",&minutosC);
        printf("Dame los segundo = ");
        scanf("%i",&segundosC);
        if (horasC<=24&&minutosC<=60&&segundosC<=60) {
            printf("El tiempo de cocción en HH:MM:SS es = %i:%i:%i",horasC,minutosC,segundosC);
            totalHoras=horasR+horasC;
            totalMinutos=minutosR+minutosC;
            totalSegundos=segundosR+segundosC;
            if (totalMinutos>=60){
                totalMinutos=totalMinutos-60;
                totalHoras=totalHoras+1;
            }
            if (totalSegundos>=60){
                totalSegundos=totalSegundos-60;
                totalMinutos=totalMinutos+1;
            }
            if (totalHoras>=24){
                totalHoras=totalHoras-24;
                printf("\n\nEL tiempo final de cocción en HH:MM:SS es a las = %i:%i:%i del dia siguiente",totalHoras,totalMinutos,totalSegundos);
            }
            else{
                printf("\n\nEL tiempo final de cocción en HH:MM:SS es = %i:%i:%i",totalHoras,totalMinutos,totalSegundos);
            }
        }
        else{
            printf("El tiempo de cocción esta mal");
            return 0;
        }
    }
    else{
        printf("La hora ingresada es incorrecta");
        return 0;
    }
    printf("\n\n");
}
