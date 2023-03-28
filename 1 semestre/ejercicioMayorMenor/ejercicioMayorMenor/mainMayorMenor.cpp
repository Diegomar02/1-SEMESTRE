//
//  main.cpp
//  ejercicioMayorMenor
//
//  Created by Diego Márquez on 15/10/20.
//

#include <iostream>

int main() {
    int min=100,max=0,num=0,total=0;
    printf("¿CUANTOS NUMEROS QUIERES EVALUAR? = ");
    scanf("%i",&total);
    for (int i=1;i<=total;i++){
        printf("Dame el numero %i = ",i);
        scanf("%i",&num);
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
        
    }
    printf("\nEl valor menor es = %i",min);
    printf("\nEL valor mayor es = %i\n\n",max);

}
