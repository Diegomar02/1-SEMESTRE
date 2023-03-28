//
//  main.cpp
//  2
//
//  Created by Diego Márquez on 23/09/20.
//

#include <iostream>

int main() {
    int i;
    int cantidadDatos;
    int valorDatos;
    int suma=0;
    printf("¿Cuantos datos quieres? = ");
    scanf("%i",&cantidadDatos);
    
    for (i=1;i<=cantidadDatos;i++){
        printf("Dame el dato %i = ",i);
        scanf("%i",&valorDatos);
        if (valorDatos>=0){
        suma=suma+valorDatos;
        }
    }
    printf("La suma de los datos es = %i\n",suma);
}
    
