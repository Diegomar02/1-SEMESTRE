//
//  main.c
//  8
//
//  Created by Diego Márquez on 02/10/20.
//

#include <stdio.h>

int main() {
    int i;
    int cantidad;
    int numero;
    int par=0;
    int cantidadPar=0;
    int impar=0;
    
    printf("¿Cuantos numeros quieres ingresar? = ");
    scanf("%i",&cantidad);
    
    for(i=1;i<=cantidad;i++){
        printf("Dame el numero %i = ",i);
        scanf("%i",&numero);
        if (numero%2==0){
            par=par+numero;
            }
        if(numero%2==1){
            impar=impar+numero;
            cantidadPar++;
        }//FIN IF
    }//FIN FOR
    printf("La suma de los pares es %i",par);
    impar=impar/cantidadPar;
    printf("\nEl promedio de los impares es %i",impar);
    printf("\n");
}//FIN DEL PROGRAMA
