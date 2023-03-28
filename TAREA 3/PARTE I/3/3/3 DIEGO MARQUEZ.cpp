//
//  main.cpp
//  3
//
//  Created by Diego Márquez on 23/09/20.
// Se reciben 30 valores positivos, se obtiene el cuadrado de cada uno de ellos y la sumatoria de dichos cuadrados.

#include <iostream>

int main() {
    int i;
    int numero;
    int cuadrado;
    int sumaTotalCuadrado=0;
    int sumaTotalNormal=0;
    printf("Te pedire 30 valores positivos\n\n");
    for (i=1;i<=30;i++){
    printf("Dame el dato %i = ",i);
    scanf("%i",&numero);
    if (numero>=1){
        cuadrado=numero*numero;
        sumaTotalNormal=sumaTotalNormal+numero;
        sumaTotalCuadrado=sumaTotalCuadrado+cuadrado;
        printf("El numero al cuadrado es = %i\n",cuadrado);
    }//FIN IF
    else {
        printf("ERROR!!! ESE NUMERO NO ES POSITIVO\n\n");
        main();
    }//FIN IF
    }//FIN FOR
    printf("\nLA SUMA DE LOS NUMERO ES = %i\n",sumaTotalNormal);
    printf("LA SUMA DE LOS CUADRADOS ES = %i\n\n",sumaTotalCuadrado);
}//FIN PROGRAMA
