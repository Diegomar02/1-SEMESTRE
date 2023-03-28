//Diego Marquez Gomez y Hugo Vázquez Hernández

#include <iostream>
#include <stdio.h>
#define FIL3 21
#define COL3 10

void nombre(int matriz[FIL3][COL3]);
void total(int matriz[FIL3][COL3]);
void precio(int matriz[FIL3][COL3]);
void mostrar(int matriz[FIL3][COL3]);

int main(){
    int datosA[FIL3][COL3];
    nombre(datosA);
}

void nombre(int matriz[FIL3][COL3]){
    char helados[21][50];
    for (int i=1;i<21;i++){
        printf("Dame el nombre del helado %i = ",i);
        scanf("%s",helados[i]);
    }
    for (int i=1;i<21;i++){
        printf("\nDame los datos de %s",helados[i]);
        printf("\nUnidades vendidas Mes 1 = ");
        scanf("%i",&matriz[i][1]);
        printf("Unidades vendidas Mes 2 = ");
        scanf("%i",&matriz[i][2]);
        printf("Unidades vendidas Mes 3 = ");
        scanf("%i",&matriz[i][3]);
        printf("Unidades vendidas Mes 4 = ");
        scanf("%i",&matriz[i][4]);
        printf("Unidades vendidas Mes 5 = ");
        scanf("%i",&matriz[i][5]);
        printf("Unidades vendidas Mes 6 = ");
        scanf("%i",&matriz[i][6]);
    }
    void total(int matriz[FIL3][COL3]);
    void precio(int matriz[FIL3][COL3]);
    
    printf(" %s , %i , %i , %i , %i , %i , %i , %i , %i  ",helados[1],matriz[1][1],matriz[1][2],matriz[1][3],matriz[1][4],matriz[1][5],matriz[1][6],matriz[1][7],matriz[1][8]);
    
}
void total(int matriz[FIL3][COL3]){
    
    matriz[1][7]=matriz[1][1]+matriz[1][2]+matriz[1][3]+matriz[1][4]+matriz[1][5]+matriz[1][6];
    matriz[2][7]=matriz[2][1]+matriz[2][2]+matriz[2][3]+matriz[2][4]+matriz[2][5]+matriz[2][6];
    matriz[3][7]=matriz[3][1]+matriz[3][2]+matriz[3][3]+matriz[3][4]+matriz[3][5]+matriz[3][6];
    matriz[4][7]=matriz[4][1]+matriz[4][2]+matriz[4][3]+matriz[4][4]+matriz[4][5]+matriz[4][6];
    matriz[5][7]=matriz[5][1]+matriz[5][2]+matriz[5][3]+matriz[5][4]+matriz[5][5]+matriz[5][6];
    matriz[6][7]=matriz[6][1]+matriz[6][2]+matriz[6][3]+matriz[6][4]+matriz[6][5]+matriz[6][6];
    matriz[7][7]=matriz[7][1]+matriz[7][2]+matriz[7][3]+matriz[7][4]+matriz[7][5]+matriz[7][6];
    matriz[8][7]=matriz[8][1]+matriz[8][2]+matriz[8][3]+matriz[8][4]+matriz[8][5]+matriz[8][6];
    matriz[9][7]=matriz[9][1]+matriz[9][2]+matriz[9][3]+matriz[9][4]+matriz[9][5]+matriz[9][6];
    matriz[10][7]=matriz[10][1]+matriz[10][2]+matriz[10][3]+matriz[10][4]+matriz[10][5]+matriz[10][6];
    matriz[11][7]=matriz[11][1]+matriz[11][2]+matriz[11][3]+matriz[11][4]+matriz[11][5]+matriz[11][6];
    matriz[12][7]=matriz[12][1]+matriz[12][2]+matriz[12][3]+matriz[12][4]+matriz[12][5]+matriz[12][6];
    matriz[13][7]=matriz[13][1]+matriz[13][2]+matriz[13][3]+matriz[13][4]+matriz[13][5]+matriz[13][6];
    matriz[14][7]=matriz[14][1]+matriz[14][2]+matriz[14][3]+matriz[14][4]+matriz[14][5]+matriz[14][6];
    matriz[15][7]=matriz[15][1]+matriz[15][2]+matriz[15][3]+matriz[15][4]+matriz[15][5]+matriz[15][6];
    matriz[16][7]=matriz[16][1]+matriz[16][2]+matriz[16][3]+matriz[16][4]+matriz[16][5]+matriz[16][6];
    matriz[17][7]=matriz[17][1]+matriz[17][2]+matriz[17][3]+matriz[17][4]+matriz[17][5]+matriz[17][6];
    matriz[18][7]=matriz[18][1]+matriz[18][2]+matriz[18][3]+matriz[18][4]+matriz[18][5]+matriz[18][6];
    matriz[19][7]=matriz[19][1]+matriz[19][2]+matriz[19][3]+matriz[19][4]+matriz[19][5]+matriz[19][6];
    matriz[20][7]=matriz[20][1]+matriz[20][2]+matriz[20][3]+matriz[20][4]+matriz[20][5]+matriz[20][6];
    
}
void precio(int matriz[FIL3][COL3]){
    matriz[1][8]=matriz[1][7]*15;
    matriz[2][8]=matriz[2][7]*15;
    matriz[3][8]=matriz[3][7]*15;
    matriz[4][8]=matriz[4][7]*15;
    matriz[5][8]=matriz[5][7]*15;
    matriz[6][8]=matriz[6][7]*15;
    matriz[7][8]=matriz[7][7]*15;
    matriz[8][8]=matriz[8][7]*15;
    matriz[9][8]=matriz[9][7]*15;
    matriz[10][8]=matriz[10][7]*15;
    matriz[11][8]=matriz[11][7]*15;
    matriz[12][8]=matriz[12][7]*15;
    matriz[13][8]=matriz[13][7]*15;
    matriz[14][8]=matriz[14][7]*15;
    matriz[15][8]=matriz[15][7]*15;
    matriz[16][8]=matriz[16][7]*15;
    matriz[17][8]=matriz[17][7]*15;
    matriz[18][8]=matriz[18][7]*15;
    matriz[19][8]=matriz[19][7]*15;
    matriz[20][8]=matriz[20][7]*15;
    
}
