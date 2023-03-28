//
//  main.cpp
//  7
//
//  Created by Diego Márquez on 14/10/20.
//

#include <iostream>

int main() {
    int edad;
    printf("Dame tu edad = ");
    scanf("%i",&edad);
    if(edad>64){
        printf("Seguridad social");
        return 0;
    }
    if (edad<18){
        printf("Execto");
        return 0;
    }
    else{
        printf("Imposible");
    }
    printf("\n");
    return 0;
}
