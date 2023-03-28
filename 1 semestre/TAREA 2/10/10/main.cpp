//
//  main.cpp
//  10
//
//  Created by Diego Márquez on 15/09/20.
//  Copyright © 2020 Diego Márquez. All rights reserved.
//

#include <iostream>

int main() {
    int numero;
    int res;
    printf("¿Que numero quieres saber si es par o impar? = ");
    scanf("%i",&numero);
    res=numero%2;
    if (res==0){
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
    
    printf("\n");
    
    
}
