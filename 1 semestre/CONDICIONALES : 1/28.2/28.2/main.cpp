//
//  main.cpp
//  28.2
//
//  Created by Diego Márquez on 22/10/20.
//

#include <iostream>

int main() {
    int opcion, sacar; float ingresar, saldo=1345.50;
    printf("PROGRAMA DE CAJERO AUTOMATICO");
    printf("\n1. Extraer dinero");
    printf("\n2. Ingresar dinero");
    printf("\n3. Ultimos movimientos");
    printf("\n4. Salir del menú");
    printf("\nPULSE LA OPCIÓN DESEADA = ");
    scanf("%i",&opcion);
    opcion=toupper(opcion);
    switch (opcion) {
        case 1:
            printf("INGRESASTE AL APARTADO DE EXTRAER DINERO");
            printf("¿Cuanto desea sacar?");
            scanf("%i",&sacar);
            printf("Recoga su Dinero");
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 2:
            printf("Su saldo hasta el momento es de %.2f",saldo);
            printf("\n¿Cuando dinero quieres ingresar a tu cuenta? = ");
            scanf("%f",&ingresar);
            saldo=saldo+ingresar;
            printf("Tu nuevo saldo es de %.2f",saldo);
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 3:
            printf("TUS ULTIMOS MOVIMIENTOS");
            printf("\nIngreso-$234");
            printf("\nRetiro-$678.25");
            printf("\nIngreso-$789.50");
            printf("\nTu saldo actual es de = %.2f",saldo);
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
        case 4:
            printf("Salir del menu");
            printf("\n¡GRACIAS! VUELVA PRONTO");
            break;
    }
    printf("\n");
}
