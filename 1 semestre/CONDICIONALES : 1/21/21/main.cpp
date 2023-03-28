//
//  main.cpp
//  21
//
//  Created by Diego Márquez on 15/10/20.
//

#include <iostream>

int main() {
    char vehiculo, tasa;
    float tasaValor;
    printf("Camion (C), Autobus (A), Turismo (T) y Motocicleta (M)");
    printf("\n¿Que vehiculo es? = ");
    scanf("%c",&vehiculo);
    getchar();
    printf("¿Toma: Aire o sangre? = ");
    scanf("%c",&tasa);
    getchar();
    printf("Valor de tasa = ");
    scanf("%f",&tasaValor);
    getchar();
    
    switch (vehiculo) {
        case 'C': case 'c':
            if (tasa=='X'||tasa=='x'){
                if (tasaValor<.16){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
            if (tasa=='S'||tasa=='s'){
                if (tasaValor<.4){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
        case 'A': case 'a':
            if (tasa=='X'||tasa=='x'){
                if (tasaValor<.16){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
            if (tasa=='S'||tasa=='s'){
                if (tasaValor<.4){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
        case 'T': case 't':
            if (tasa=='X'||tasa=='x'){
                if (tasaValor<.26){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
            if (tasa=='S'||tasa=='s'){
                if (tasaValor<.6){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
        case 'M': case 'm':
            if (tasa=='X'||tasa=='x'){
                if (tasaValor<.16){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
            if (tasa=='S'||tasa=='s'){
                if (tasaValor<.4){
                    printf("NEGATIVO");
                    break;
                }
                else{
                    printf("POSITIVO");
                    break;
                }
            }
    }
}

