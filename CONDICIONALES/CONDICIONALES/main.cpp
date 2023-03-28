//
//  main.cpp
//  CONDICIONALES
//
//  Created by Diego Márquez on 22/09/20.
//

#include <iostream>

int main() {
    int cuadrado;
    int numero;
    int i;
    int sumaTotal=0;
    int opcion;
        for (i=1;i<=30;i++){
            printf("\nDame el numero %i = ",i);
            scanf ("%i",&numero);
            cuadrado=numero*numero;
            printf("Numero al cuadrado es = %i",cuadrado);
            sumaTotal=sumaTotal+cuadrado;
            printf("\nLa suma acumulada es = %i \n",sumaTotal);
        }//Fin del for
    printf("\n\nYa fueron 30 numeros\n\n");
    printf("La suma acumulada es = %i",sumaTotal);
    printf("\n\n¿Quieres hacerlos otra ves? = Si (1) o No (cualquier otro numero) = ");
    scanf("%i",&opcion);
    
    if (opcion==1){
        main();
    }//Fin del if
    else{
        printf("\nGRACIAS!!! VUELVA PRONTO\n\n");
    }//Fin del else
}//Fin del programa
    

