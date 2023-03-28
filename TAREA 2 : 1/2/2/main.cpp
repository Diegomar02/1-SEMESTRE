//
//  main.cpp
//  2
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>

int main(void) {
    int I,N,NUM,SUM;
    SUM=0;
    printf("Ingresar el numero de datos:\t");
    scanf("%d",&N);
    for (I=1;I<=N;I++){
        printf("Ingrese el dato de numero %d:\t",I);
        scanf("%d",&NUM);
        if (NUM>0){
            SUM=SUM+NUM;
        }
    }
    printf("\nLa suma de los numeros positivos es: %i \n",SUM);
}
