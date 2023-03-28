//
//  main.cpp
//  ACTIVIDAD CLASE
//
//  Created by Diego Márquez on 17/11/20.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int opcion,i;
    char nombre[30];
    char nombreyApellido[2][30];
    
    void menu();
    printf("1. Capturar una cadena");
    printf("\n2. Capturar y mostrar una cadena");
    printf("\n3. Capturar y mostrar una cadena caracter por caracter");
    printf("\n¿Cual opcion desea? = ");
    scanf("%i",&opcion);
    
    
    if (opcion==1){
        printf("Introduce tu nombre = ");
        scanf("%s",nombre);
        printf("Capturado");
    }//Fin del If
    if (opcion==2){
        printf("Valor 1 Nombre y Valor 2 Apellido");
        for (i=1;i<=2;i++){
            printf("\nIntroduce el valor %i = ",i);
            scanf("%s",nombreyApellido[i]);
        }//Fin del For
        printf("Tu nombre es %s %s",nombreyApellido[1],nombreyApellido[2]);
    }//Fin del If
    if (opcion==3){
        printf("Tu nombre = ");
        scanf("%s",nombre);
        for (i=0;i<=30;i++){
            printf("Valor en la posicion %i = %c\n",i,nombre[i]);
        }//Fin del for
    }//Fin del if
    printf("\n");
}//Fin del programa
