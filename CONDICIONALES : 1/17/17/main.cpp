//
//  main.cpp
//  17
//
//  Created by Diego Márquez on 14/10/20.
//   17. El dueño de una papelería desea un programa que le indique el precio de venta de un
//   artículo dado. El precio se calcula de acuerdo con la siguiente fórmula:
//   PVP = precio_coste + ganancia. Donde la ganancia será:

//  El 15% si el precio de coste es inferior 3€.
//  50 céntimos si el precio de coste está entre 3€ y 6€.
//  El 25% si el precio de coste supera los 6€


#include <iostream>

int main() {
    float precioInicial;
    float ganancia;
    float precioVenta;
    
    printf("¿CUAL ES EL PRECIO INICIAL DEL PRODUCTO? = ");
    scanf("%f",&precioInicial);
    
    if (precioInicial<3){
        ganancia=precioInicial*.15;
        precioVenta=ganancia+precioInicial;
        printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
    }
    if (precioInicial>3&&precioInicial<6){
        precioVenta=precioInicial+.50;
        printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
    }
    if (precioInicial>6){
        ganancia=precioInicial*.25;
        precioVenta=precioInicial+ganancia;
        printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
    }
    printf("\n\n");
}//FIn del programa
