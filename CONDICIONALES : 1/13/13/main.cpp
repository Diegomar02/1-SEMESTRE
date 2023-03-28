//
//  main.cpp
//  13
//
//  Created by Diego Márquez on 14/10/20.
//  Solicitar al usuario la inicial del día de la semana y mostrar el nombre del día completo.


#include <iostream>

int main() {
    char dia;
    printf("Ingresa la inicial del dia = ");
    scanf("%c",&dia);
    dia=toupper(dia);
    switch (dia) {
        case 'L':
            printf("Lunes");
        case 'M':
            printf("Martes");
        case 'X':
            printf("Miercoles");
        case 'J':
            printf("Jueves");
        case 'V':
            printf("Viernes");
        case 'S':
            printf("Sabado");
        case 'D':
            printf("Domingo");
    }
    printf ("\n");
}
