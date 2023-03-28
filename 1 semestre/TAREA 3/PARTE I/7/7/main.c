//
//  main.c
//  7
//
//  Created by Diego Márquez on 02/10/20.
//

#include <stdio.h>

int main() {
    int i;
    int principio;
    int final;
    int par=0;
    
    printf("RECUERDA QUE EL NUMERO INICIAL TIENE QUE SER MAS CHICO QUE EL NUMERO FINAL");
    printf("\nNumero Inicial = ");
    scanf("%i",&principio);

    printf("Numero Final = ");
    scanf("%i",&final);
    if (principio<final){
        for(i=principio;i<=final;i++){
        printf("%i",principio);
            printf(",");
            if (principio%2==0){
                par++;
            }
            principio++;
        }//FIN FOR
        printf("\nTienes %i numeros pares",par);
    }//FIN DEL IF

    else {
        printf("EL NUMERO INICIAL ES MAS GRANDE QUE EL FINAL");
    }//FIN DEL ELSE
    printf("\n");
}//FIN DEL PROGRAMA
