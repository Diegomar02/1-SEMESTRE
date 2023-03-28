//
//  main.cpp
//  5
//
//  Created by Diego Márquez on 22/11/20.
//
//  Un número entero es un “número perfecto” si sus factores, incluyendo al 1 (pero excluyendo en el número mismo), suman igual que el numero. Ejemplo: 6 es un numero perfecto porque 6= 1+2+3. Escriba un programa que contenga una función que muestre los números perfectos que se encuentren en un rango definido por el usuario.

#include <iostream>
#include <stdio.h>

int main() {
    int li,ls,i;
    printf("Limite Inferior = ");
    scanf("%i",&li);
    printf("Limite Superior = ");
    scanf("%i",&ls);
    
    if (li<ls){
        li=li;
        ls=ls;
    }
    if(ls<li){
        li=ls;
        ls=li;
    }
    printf("Los numeros en este rango = ");
    for (i=li;i<=ls;i++){
        printf("%i",i);
        if (i<ls){
            printf(",");
        }
    }
    printf("\n");
    printf("Los numero perfectos en ese rango son = ");
    int cons=2,d,exponente=2;
    for (i=li;i<=ls;i++){
        int n1,n2;
        n1=pow(cons,exponente-1);
        n2=pow(cons,exponente) - 1;
        d=(n1 * n2);
        if (exponente<=2){
            exponente=exponente+1;
        }
        else{
            exponente=exponente+2;
        }
        if (d>=li&&d<=ls){
            printf("%i",d);
            if (d<ls){
                printf(",");
            }
        }
    }
    printf("\n");
}
