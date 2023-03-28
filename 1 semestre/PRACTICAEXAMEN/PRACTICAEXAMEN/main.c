//
//  main.c
//  PRACTICAEXAMEN
//
//  Created by Diego Márquez on 02/10/20.
//

#include <stdio.h>

int main() {
    float i;
    float cantidad=0;
    float total= 0;
    
    printf("Bienvenido!!!");
    printf("\nTe dire cuando pagaras de impuestos de tus 15 empleados\n");
    
    for (i=1;i<=15;i++){
        printf("Dame el monto de compra %.0f = ",i);
        scanf("%f",&cantidad);
        total=total+cantidad;
    }//FIN DEL FOR
    if (total>-1&&total<16){
        printf("No pagas impuestos\n");
    }//FIN DEL IF
    if (total>15&&total<41){
        total=total*.10;
        printf("Pagas %.2f de impuestos\n",total);
    }
    if (total>40){
        total=total*.18;
        printf("Pagas %.2f de impuestos\n",total);
    }
    
}//FIN DEL PROGRAMA
