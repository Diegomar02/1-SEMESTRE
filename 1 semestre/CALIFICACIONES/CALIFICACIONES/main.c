//
//  main.c
//  CALIFICACIONES
//
//  Created by Diego Márquez on 02/10/20.
//

#include <stdio.h>

int main() {
    int i;
    int cantidad;
    float calificacion=0.0;
    float total = 0.0;
    float promedio;
    
    printf("TE DARE EL PROMEDIO DE TUS CALIFICACIONES");
    printf("\n¿Cuantas calificaciones vas a ingresar? = ");
    scanf("%i",&cantidad);
    printf("\nINGRESA LAS CALIFICACIONES DEL 0-100\n\n");
    
    for (i=1;i<=cantidad;i++){
        printf("Dale la calificación %i = ",i);
        scanf("%f",&calificacion);
        total=total+calificacion;
    }
    promedio=total/cantidad;
    if (promedio==100){
        printf("EXCELENTE!\n");
    }
    if (promedio>89&&promedio<100){
        printf("Muy bien\n");
    }
    if (promedio>79&&promedio<90){
        printf("Bien\n");
    }
    if (promedio>69&&promedio<80){
        printf("Hay que mejorar\n");
    }
    if (promedio<=69){
        printf("Reprobado\n");
    }
}
