//Diego Marquez Gomez y Hugo Vázquez Hernández

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define FIL2 50
void ordenar(int matriz[FIL2]);

int main() {
    int matriz[FIL2];
    srand(time(NULL));
    int i,numero1;
    for (i=0;i<FIL2;i++){
        numero1=rand()%101;
        printf("\nNumero %i = %i",i+1,numero1);
        matriz[i]=numero1;
    }
    printf("\n\nLOS NUMEROS ORDENADOS SON =  \n");
    ordenar(matriz);
    printf("\n");
    
}

void ordenar(int matriz[FIL2]){
    int Temp, a, b;
      for (a=0;a<FIL2;a++) {
        for (b=0;b<FIL2-1;b++) {
          if (matriz[b]<matriz[b+1]) {
            Temp=matriz[b];
            matriz[b]=matriz[b+1];
            matriz[b+1]=Temp;
          }
        }
      }
     
    for (a=0;a<50;a++) {
        printf("%i ",matriz[a]);
    }
    printf("\nSON LOS NUMEROS PARES EN LA MATRIZ = ");
    for (a=0;a<50;a++) {
        if(matriz[a]%2==1){
            printf("%i ",matriz[a]);
        }
    }
    
}



