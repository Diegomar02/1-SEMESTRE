//
//  main.cpp
//  1
//
//  Created by Diego Márquez on 23/09/20.
//

#include <iostream>

int main() {
    int empleado;
    int salario;
    int total=0;
    printf("TE PEDIRÉ 15 SALADIOS\n\n");
    
    for (empleado=1;empleado<=15;empleado++){
        printf("Dame el salario del empleado %i = ",empleado);
        scanf("%i",&salario);
        total=total+salario;
    }
    printf("El total de todos los salarios es = %i\n",total);
}
