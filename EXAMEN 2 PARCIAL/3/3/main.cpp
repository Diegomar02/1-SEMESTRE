//
//  main.cpp
//  3
//
//  Created by Diego Márquez on 22/11/20.
//

#include <iostream>


int main(){
    int tamaño, a, b;
    
    printf("Ingresa el tamaño del Cubo = ");
    scanf("%d",&tamaño);
    printf("\n");
    for(int a=0;a<tamaño;a++){
        printf("\t*");
    }
    printf("\n");
    for(int a=0;a<tamaño-2;a++){
        printf("\t*");
            for(int b=0;b<tamaño-2;b++){
                printf("\t%i",tamaño);
            }
        printf("\t*");
        printf("\n");
    }
    for(int a=0;a<tamaño;a++){
        printf("\t*");
    }
    printf("\n\n");
}

