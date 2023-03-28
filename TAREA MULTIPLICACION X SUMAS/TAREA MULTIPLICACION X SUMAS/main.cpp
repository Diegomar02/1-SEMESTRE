//
//  main.cpp
//  TAREA MULTIPLICACION X SUMAS
//
//  

#include <iostream>

int main() {
    int numero1;
    int numero2;
    int a=0;
    int b=0;
    int resultado;
    
    printf("HAREMOS UNA MULTIPLICACIÓN POR SUMA\n");
    printf("Ingresa el numero 1 = ");
    scanf("%i",&numero1);
    printf("Ingresa el numero 2 = ");
    scanf("%i",&numero2);
    printf("LA MULTIPLICACIÓN SERIA %i X %i\n",numero1,numero2);
    resultado=numero1*numero2;
    
    while(a<numero1){
        printf("%i",numero2);
        a++;
        if(a==numero1){
            printf(" = %i",resultado);
            break;
        }//Fin del IF
        printf(" + ");
    }//Fin del while
    printf("\n");
    
    while(b<numero2){
        printf("%i",numero1);
        b++;
        if(b==numero2){
            printf(" = %i",resultado);
            break;
        }//Fin del IF
        printf(" + ");
    }//Fin del while
    printf("\n");
    
}//Fin del programa

