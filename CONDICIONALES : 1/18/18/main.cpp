//
//  main.cpp
//  18
//
//  Created by Diego Márquez on 14/10/20.
//  Calcular la nómina semanal (salario neto) de un trabajador de una empresa cuyo trabajo se paga por horas. Introducir por teclado el número de horas y el precio de la hora.

//  Las primeras 35 horas se pagan a la tarifa normal. Las horas extras se pagan un 50% más que las normales.
//  Los impuestos a deducir a los trabajadores varían en función de su sueldo mensual.
//  Si el sueldo es menor de 600€, libre de impuestos.
//  Si el sueldo está entre 600€ y 1000€, los impuestos son el 20%.
//  Si el sueldo es mayor de 1000€, el 30%.


#include <iostream>

int main() {
    int horas, horasExtras;
    float precio, sueldoSemana=0.0, sueldoMensual=0.0, impuestos=0.0;
    printf("¿CUANTAS HORAS TRABAJASTE? = ");
    scanf("%i",&horas);
    printf("¿CUANTO CUESTA LA HORA? = ");
    scanf("%f",&precio);
    if(horas>35){
        horasExtras=horas-35;
        printf("\nTrabajaste %i horas extras",horasExtras);
        sueldoSemana=(35*precio)+(horasExtras*(precio*1.5));
        printf("\nTu sueldo semanal es de = %.2f",sueldoSemana);
        sueldoMensual=sueldoSemana*4;
        printf("\nTu sueldo mensual es de = %.2f",sueldoMensual);
        }
    else{
        sueldoSemana=horas*precio;
        printf("\nTu sueldo semenal es de = %.2f",sueldoSemana);
        sueldoMensual=sueldoSemana*4;
        printf("\nTu sueldo mensual es de = %.2f",sueldoMensual);
    }
    
    if (sueldoMensual<600){
        printf("Libre de impuestos");
    }
    if (sueldoMensual>=600&&sueldoMensual<=1000){
        printf("\n\nImpuestos del 20 porciento");
        impuestos=sueldoMensual*.20;
        printf("\nPagas %.2f de impuestos",impuestos);
    }
    if (sueldoMensual>1000){
        printf("\n\nImpuestos del 30 porciento");
        impuestos=sueldoMensual*.30;
        printf("\nPagas %.2f de impuestos",impuestos);
    }
    printf("\n\n");
    
}//FIn del programa
