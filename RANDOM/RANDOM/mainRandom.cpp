//
//  main.cpp
//  RANDOM
//
//  Created by Diego Márquez on 15/10/20.
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int total, num, i;
    printf("¿Cuantos numeros quieres generar? = ");
    scanf("%i",&total);
    for (i=1;i<=total;i++){
        num=rand()%101;
        printf("%i\t",num);
    }
    printf("\n");
}
