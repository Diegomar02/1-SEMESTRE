//
//  main.cpp
//  CLASE 2 ACTIVIDAD
//
//  Created by Diego Márquez on 08/10/20.

//  1. Escribir un programa que calcule la mitad, el cuadrado y el cubo de un número real. Se puede utilizar la función pow(a,b) que calcula ab. Esta función está incluida en la librería math.h.

//  2. Escribir un programa que lea dos números enteros A y B, y obtenga los valores A dividido por B y su resto.

//  3. Escribir un programa que convierta un número de segundos en su equivalente en días, horas, minutos y segundos. Debe visualizarse dd - hh:mm:ss.

#include <iostream>
#include <stdio.h>

int main() {
    int opcion;
    printf("Bienvenido!!");
    printf("\n1. Calcule la mital, el cuadrado y el cubo de un numero");
    printf("\n2. Dividir A entre B y su resto");
    printf("\n3. Minutos a dias, horas minutos y segundos");
    printf("\nSeleccione la opción que desea = ");
    scanf("%i",&opcion);
    
    if(opcion==1){
        int numero, mitad, cuadrado, cubo;
        printf("Que numero sera = ");
        scanf("%i",&numero);
        mitad=numero/2;
        printf("\nLa mitad de %i es = %i",numero,mitad);
        cuadrado=numero*numero;
        printf("\nEl cuadrado de %i es = %i",numero,cuadrado);
        cubo=numero*numero*numero;
        printf("\nEl cubo de %i es = %i",numero,cubo);
    }
    if(opcion==2){
        float aF, bF;
        float division;
        
        printf("Dame el numero A = ");
        scanf("%f",&aF);
        printf("Dame el numero B = ");
        scanf("%f",&bF);
        division=aF/bF;
        printf("\nEL resultado de la división de %.2f / %.2f es = %.2f",aF,bF,division);
        int resto, a1, b2;
        a1=aF;
        b2=bF;
        resto=a1%b2;
        printf("\nEl resultado del resto de la division es = %i",resto);
    }
    if(opcion==3){
        int numero, dias, horas, minutos, segundos;
        printf("Cuantos segundos son = ");
        scanf("%i",&numero);
        dias=numero/86400;
        horas=numero/3600;
        minutos=numero/60;
        segundos=numero;
        printf("Serian %i - %i:%i:%i",dias,horas,minutos,segundos);
    }
    int continuar;
    printf("\n\n¿Deseas continuar? Si (1)y No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
    printf("\n");
}
