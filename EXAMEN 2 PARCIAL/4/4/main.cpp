//
//  main.cpp
//  4
//
//  Created by Diego Márquez on 22/11/20.
//
//  Escriba un programa que contenga una función en la que se generen 100 valores enteros, se muestren en pantalla y devuelva cuántos de esos valores son múltiplos de 7.


#include <iostream>

int main() {
    int li, lf, i, a=0;
    printf("Ingresa el limite inferior = ");
    scanf("%i",&li);
    printf("Ingresa el limite superior = ");
    scanf("%i",&lf);
    
    if (li<lf){
        li=li;
        lf=lf;
    }
    if (lf<li){
        li=lf;
        lf=li;
    }
    printf("\nLos numeros son = ");
    for (i=li;i<=lf;i++){
        printf("%i",i);
        if(i<lf){
            printf(",");
            if (i%7==0){
                a++;
            }
        }
    }
    printf("\nDe todos los numeros impresos %i son multiplo de 7",a);
    printf("\n");
}
    
    
            
        
  



