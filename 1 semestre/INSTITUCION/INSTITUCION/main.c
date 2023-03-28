//
//  main.c
//  INSTITUCION
//
//  Created by Diego Márquez on 02/10/20.
//

#include <stdio.h>

int main() {
    float promedio;
    int opcion;
    int reprobadas;
    int unidadesTotal;
    int unidades1=55;
    int unidades2=50;
    int unidades3=45;
    int unidades4=40;
    int colegiaturaPrepa=180;
    int colegiaturaProfesional=300;
    
    printf("TE DIRE CUANTAS UNIDADES TIENES QUE CURSA Y SI TIENES DESCUENTO EN BASE A TU PROMEDIO");
    printf("\n¿Cual es tu promedio? = ");
    scanf("%f",&promedio);
    printf("¿Eres de prepatoria? Si (1) y No (2) = ");
    scanf("%i",&opcion);
    
    switch (opcion) {
        case 1:
            if (promedio>9.4&&promedio<101){
                printf("\nCursar %i unidades",unidades1);
                printf("\nTienes 25 porciento de descuento en la colegiatura");
                unidadesTotal=(unidades1/5)*colegiaturaPrepa;
                unidadesTotal=unidadesTotal*.75;
                printf("\nVas a pagar %i de colegiatura",unidadesTotal);
            }//FIN IF
            if (promedio>8.9&&promedio<9.5){
                printf("\nCursar %i unidades",unidades2);
                printf("\nTienes 10 porciento de descuento en la colegiatura");
                unidadesTotal=(unidades2/5)*colegiaturaPrepa;
                unidadesTotal=unidadesTotal*.90;
                printf("\nVas a pagar %i de colegiatura",unidadesTotal);
            }//FIN IF
            if (promedio>7&&promedio<9){
                printf("\nCursar %i unidades",unidades2);
                printf("\nNo tienes descuento en la colegiatura");
                unidadesTotal=(unidades2/5)*colegiaturaPrepa;
                printf("\nVas a pagar %i de colegiatura",unidadesTotal);
            }//FIN IF
            if (promedio<=7){
                printf("¿Cuantas tienes reporbadas? = ");
                scanf("%i",&reprobadas);
                if (reprobadas<4){
                printf("\nCursar %i unidades",unidades3);
                printf("\nNo tienes descuento en la colegiatura");
                unidadesTotal=(unidades3/5)*colegiaturaPrepa;
                printf("\nVas a pagar %i de colegiatura",unidadesTotal);
                }//FIN IF REPROBAR
                if (reprobadas>3){
                printf("\nCursar %i unidades",unidades4);
                printf("\nNo tienes descuento en la colegiatura");
                unidadesTotal=(unidades4/5)*colegiaturaPrepa;
                printf("\nVas a pagar %i de colegiatura",unidadesTotal);
                }//FIN IF REPROBAR
            }//FIN IF
        case 2:
            printf("\nEntonces eres Profesional");
            if (promedio>9.4&&promedio<101){
            printf("\nCursar %i unidades",unidades1);
            printf("\nTienes 20 porciento de descuento en la colegiatura");
            unidadesTotal=(unidades1/5)*colegiaturaProfesional;
            unidadesTotal=unidadesTotal*.80;
            printf("\nVas a pagar %i de colegiatura",unidadesTotal);
            }//FIN IF
            if (promedio<9.5){
            printf("\nCursar %i unidades",unidades1);
            printf("\nNo tienes descuento en la colegiatura");
            unidadesTotal=(unidades1/5)*colegiaturaProfesional;
            printf("\nVas a pagar %i de colegiatura",unidadesTotal);
            }//FIN IF
       }//FIN SWITCH
    printf("\n");
}//FIN PROGRAMA
