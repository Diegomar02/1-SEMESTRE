//
//  main.cpp
//  7
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//

#include <iostream>

int main() {
    float examenMate;
    float tarea1Mate;
    float tarea2Mate;
    float tarea3Mate;
    float finalTareasMate;
    float finalMate;
    
    printf("EMPEZAMOS CON MATEMATICAS");
    printf("\n¿Cual es la calificación del examen? = ");
    scanf("%f",&examenMate);
    examenMate=examenMate*.90;
    printf("HUBO 3 TAREAS");
    printf("\n¿Calificacion de la tarea 1? = ");
    scanf("%f",&tarea1Mate);
    printf("¿Calificacion de la tarea 2? = ");
    scanf("%f",&tarea2Mate);
    printf("¿Calificacion de la tarea 3? = ");
    scanf("%f",&tarea3Mate);
    finalTareasMate=((tarea1Mate+tarea2Mate+tarea3Mate)/3)*.10;
    finalMate=examenMate+finalTareasMate;
    printf("La calificación final de Matematicas es = %f",finalMate);
    printf("\n");
    
    float examenFisica;
    float tarea1Fisica;
    float tarea2Fisica;
    float finalTareasFisica;
    float finalFisica;
    
    printf("SEGUIMOS CON FISICA");
    printf("\n¿Cual es la calificacion del examen? = ");
    scanf("%f",&examenFisica);
    examenFisica=examenFisica*.80;
    printf("HUBO 2 TAREAS");
    printf("\n¿Calificacion de la tarea 1? = ");
    scanf("%f",&tarea1Fisica);
    printf("¿Calificacion de la tarea 2? = ");
    scanf("%f",&tarea2Fisica);
    finalTareasFisica=((tarea1Fisica+tarea2Fisica)/2)*.20;
    finalFisica=examenFisica+finalTareasFisica;
    printf("La calificación final de Fisica es = %f",finalFisica);
    printf("\n");
    
    float examenQuimica;
    float tarea1Quimica;
    float tarea2Quimica;
    float tarea3Quimica;
    float finalTareasQuimica;
    float finalQuimica;
    
    printf("Y TERMINAMOS CON QUIMICA");
    printf("\n¿Cual es la calificación del examen? = ");
    scanf("%f",&examenQuimica);
    examenQuimica=examenQuimica*.85;
    printf("HUBO 3 TAREAS");
    printf("\n¿Calificacion de la tarea 1? = ");
    scanf("%f",&tarea1Quimica);
    printf("¿Calificacion de la tarea 2? = ");
    scanf("%f",&tarea2Quimica);
    printf("¿Calificacion de la tarea 3? = ");
    scanf("%f",&tarea3Quimica);
    finalTareasQuimica=((tarea1Quimica+tarea2Quimica+tarea3Quimica)/3)*.15;
    finalQuimica=examenQuimica+finalTareasQuimica;
    printf("La calificación final de Matematicas es = %f",finalQuimica);
    printf("\n");
    
    printf("EL PROMEDIO DE LAS TRES MATERIA ES = %f",(finalMate+finalFisica+finalQuimica)/2);
}
