//
//  main.cpp
//  5
//
//  Created by Diego Márquez on 24/09/20.
//

#include <iostream>

int main() {
    int cantidad;
    int numero = 0;
    int numeroAnterior=0;
    int mayor=0;
    int i;
    printf("TE DARE EL NUMERO MAYOR DE UNA RANGO DE NUMEROS\n");
    printf("¿CUANTOS NUMEROS QUIERES? = ");
    scanf("%i",&cantidad);
    for (i=1;i<=cantidad;i++){
        if (numero>numeroAnterior){
            numeroAnterior=numero;
        }
        printf("DAME EL NUMERO %i = ",i);
        scanf("%i",&numero);
        if (numero<numeroAnterior){
            mayor=numeroAnterior;
        }
        if (numero>numeroAnterior){
            mayor=numero;
        }
    }
    printf("El numero mayor es = %i\n",mayor);
}
