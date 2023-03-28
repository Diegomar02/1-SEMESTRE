//
//  main.cpp
//  28.1
//
//  Created by Diego Márquez on 20/10/20.
//

#include <iostream>

int main() {
    char opcion; int sacar; float ingresar, saldo=1345.50;
    printf("PROGRAMA DE CAJERO AUTOMATICO");
    printf("\nA. Extraer dinero");
    printf("\nB. Ingresar dinero");
    printf("\nC. Ultimos movimientos");
    printf("\nD. Salir del menú");
    printf("\nPULSE LA OPCIÓN DESEADA = ");
    scanf("%c",&opcion);
    opcion=toupper(opcion);
    switch (opcion) {
        case 'A':
            printf("INGRESASTE AL APARTADO DE EXTRAER DINERO");
            printf("¿Cuanto desea sacar?");
            scanf("%i",&sacar);
            printf("Recoga su Dinero");
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 'B':
            printf("Su saldo hasta el momento es de %.2f",saldo);
            printf("\n¿Cuando dinero quieres ingresar a tu cuenta? = ");
            scanf("%f",&ingresar);
            saldo=saldo+ingresar;
            printf("Tu nuevo saldo es de %.2f",saldo);
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 'C':
            printf("TUS ULTIMOS MOVIMIENTOS");
            printf("\nIngreso-$234");
            printf("\nRetiro-$678.25");
            printf("\nIngreso-$789.50");
            printf("\nTu saldo actual es de = %.2f",saldo);
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 'D':
            printf("Salir del menu");
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
    }
    printf("\n");
}
