//
//  main.cpp
//  8
//
//  Created by Diego Márquez on 29/10/20.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main(void){
    int I=1, B=0, C;
    double RES;
    RES=4.0/I;
    C=1;
    while ((fabs (3.1415 - RES)) >0.0005){
        I+=2;
        if(B){
            RES+=(double)(4.0/I);
            B=0;
        }
        else{
            RES-=(double)(4.0/I);
            B=1;
        }
        C++;
    }
    printf("\nNumero de terminos: %d",C);
}