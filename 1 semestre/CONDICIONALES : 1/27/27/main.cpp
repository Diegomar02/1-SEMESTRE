
//  main.cpp
//  27
//  Created by Diego Márquez on 20/10/20.

#include <iostream>

int main() {
    int a,b,c,d,e,n,anno;
    printf("¿Cual es la fecha? = ");
    scanf("%i",&anno);
    
    a=anno%19;
    b=anno%4;
    c=anno%7;
    
    d=19*a+24;
    d=d%30;
    e=(2*b+4*c+6*d+5);
    e=e%7;
    n=22+d+e;
    
    if (n>31){
        n=n-31;
        printf("El domingo de pascua del año %i es el = %i de abril",anno,n);
    }
    else{
        printf("El domingo de pascua del año %i es el = %i de marzo",anno,n);
    }
    printf("\n");
}
