//
//  main.cpp
//  2
//
//  Created by Diego Márquez on 22/11/20.
//

#include <iostream>
#include <stdio.h>

//PROTOTIPOS
int datosAnalizar();
int hombreOmujer();
int edadHoM();
void cicloHombre();


int main() {
    cicloHombre();
    printf("\n");
}
    





int hombreOmujer(){
    int HoM;
    printf("\n¿Eres hombre (1) o Mujer (1)? = ");
    scanf("%i",&HoM);
    return HoM;
}
int edadHoM(){
    int edad;
    printf("¿Cuantos años tienes? = ");
    scanf("%i",&edad);
    return edad;
    
}
int datosAnalizar(){
    int opcion;
    printf("¿Cuantas personas quieres analizar? = ");
    scanf("%d",&opcion);
    return opcion;
}

void cicloHombre(){
    int i, opcion, edad, HoM;
    opcion=datosAnalizar();
    for (i=1;i<=opcion;i++){
        printf("\nAnalizando persona %i",i);
        HoM=hombreOmujer();
        edad=edadHoM();
        if (edad<25&&HoM==1){
            printf("Pagan 1,000");
        }
        if (edad>24&&HoM==1){
            printf("Pagan 700");
        }
        if (edad<21&&HoM==2) {
            printf("Pagan 800");
        }
        if (edad>20&&HoM==2){
            printf("Pagan 500");
        }
    }
}










