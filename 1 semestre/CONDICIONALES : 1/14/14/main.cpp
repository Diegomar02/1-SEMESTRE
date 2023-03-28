//
//  main.cpp
//  14
//
//  Created by Diego Márquez on 14/10/20.
//

#include <iostream>

int main() {
    int dia;
    int mes;
    int año;
    
    printf("Te dire si tu fecha esta bien...");
    printf("\nDame el dia = ");
    scanf("%i",&dia);
    printf("Dame el mes = ");
    scanf("%i",&mes);
    printf("Dame el año = ");
    scanf("%i",&año);
    
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=31){
                printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
            }
            else{
                printf("\nINVALIDA");
                break;
            }
        case 4: case 6: case 9: case 11:
            if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=30){
                printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
            }
            else{
                printf("\nINVALIDA");
                break;
            }
        case 2:
            if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=28){
                printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
            }
            else{
                printf("\nFECHA INVALIDA");
                break;
            }
    }
    printf("\n");
}//Fin del programa
