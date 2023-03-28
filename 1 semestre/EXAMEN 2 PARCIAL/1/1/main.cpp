//
//  main.cpp
//  1
//
//  Created by Diego Márquez on 21/11/20.
//

#include <iostream>

int main() {
    int cont, acum, n, i;
    printf("Dame el valor de n = ");
    scanf("%i",&n);
    i=1;
    do{
        cont=1;
        acum=0;
        do{
            if((i%cont)==0){
                acum = acum+cont;
            }//Fin If
            cont = cont+1;
        } while (cont <= (i-1));
           
        if(acum==i){
            printf("el numero es perfecto");
            return 0;
        }
        else{
            printf("El numero no es perfecto");
            
        }
        i=i+1;
    }
    while (i<=n);
}
