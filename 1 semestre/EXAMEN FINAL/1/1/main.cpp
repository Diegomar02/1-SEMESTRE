//Diego Marquez Gomez y Hugo Vázquez Hernández

#include <stdlib.h>
#include <time.h>
#include <iostream>

#define COL1 13
#define FIL1 4
void menu();
void llenar(int matriz[FIL1][COL1]);
void totalLinea(int matriz[FIL1][COL1]);
void totalCoche(int matriz[FIL1][COL1]);
void llenadoAleatoreo(int matriz[FIL1][COL1]);
void totalGeneral(int matriz[FIL1][COL1]);
void listado(int matriz[FIL1][COL1]);

int main() {
    menu();
    printf("\n");
}

void menu(){
    int opcion;
    int datosA[FIL1][COL1];
        printf("OPCION");
        printf("\n1. Devuelva la recaudación total por línea de colectivo");
        printf("\n2. Muestre la recaudación total por coche");
        printf("\n3. Llenado de datos aleatorio");
        printf("\n4. Devuelva la recaudación total general");
        printf("\n5. El listado con la información de toda la empresa");
        printf("\n¿Que opcion quieres? = ");
        scanf("%i",&opcion);
    if (opcion==1){
        llenar(datosA);
        totalLinea(datosA);
    }
    if (opcion==2){
        llenar(datosA);
        totalCoche(datosA);
    }
    if (opcion==3){
        llenadoAleatoreo(datosA);
        totalLinea(datosA);
        totalCoche(datosA);
        totalGeneral(datosA);
    }
    if (opcion==4){
        llenar(datosA);
        totalLinea(datosA);
        totalCoche(datosA);
        totalGeneral(datosA);
    }
    if (opcion==5){
        llenar(datosA);
        listado(datosA);
    }
}

void llenar(int matriz[FIL1][COL1]){
    int a,b;
    for (a=1;a<FIL1;a++){
        for (b=1;b<COL1;b++){
            printf("Dame la cantidad $ de la linea %i coche %i = ",a,b);
            scanf("%d",&matriz[a][b]);
        }
    }
}

void totalLinea(int matriz[FIL1][COL1]){
    int linea1,linea2,linea3;
    printf("\nTOTAL DE LAS LINEAS\n");
    printf("Linea 1= ");
    linea1=matriz[1][1]+matriz[1][2]+matriz[1][3]+matriz[1][4]+matriz[1][5]+matriz[1][6]+matriz[1][7]+matriz[1][8]+matriz[1][9]+matriz[1][10]+matriz[1][11]+matriz[1][12];
    printf("%d",linea1);
    printf("\nLinea 2 = ");
    linea2=matriz[2][1]+matriz[2][2]+matriz[2][3]+matriz[2][4]+matriz[2][5]+matriz[2][6]+matriz[2][7]+matriz[2][8]+matriz[2][9]+matriz[2][10]+matriz[2][11]+matriz[2][12];
    printf("%d",linea2);
    printf("\nLinea 3 = ");
    linea3=matriz[3][1]+matriz[3][2]+matriz[3][3]+matriz[3][4]+matriz[3][5]+matriz[3][6]+matriz[3][7]+matriz[3][8]+matriz[3][9]+matriz[3][10]+matriz[3][11]+matriz[3][12];
    printf("%d",linea3);
}

void totalCoche(int matriz[FIL1][COL1]){
    int coche1,coche2,coche3,coche4,coche5,coche6,coche7,coche8,coche9,coche10,coche11,coche12;
    printf("\nTOTAL DE LOS COCHES\n");
    printf("Coche 1 = ");
    coche1=matriz[1][1]+matriz[2][1]+matriz[3][1];
    printf("%d\n",coche1);
    printf("Coche 2 = ");
    coche2=matriz[1][2]+matriz[2][2]+matriz[3][2];
    printf("%d\n",coche2);
    printf("Coche 3 = ");
    coche3=matriz[1][3]+matriz[2][3]+matriz[3][3];
    printf("%d\n",coche3);
    printf("Coche 4 = ");
    coche4=matriz[1][4]+matriz[2][4]+matriz[3][4];
    printf("%d\n",coche4);
    printf("Coche 5 = ");
    coche5=matriz[1][5]+matriz[2][5]+matriz[3][5];
    printf("%d\n",coche5);
    printf("Coche 6 = ");
    coche6=matriz[1][6]+matriz[2][6]+matriz[3][6];
    printf("%d\n",coche6);
    printf("Coche 7 = ");
    coche7=matriz[1][7]+matriz[2][7]+matriz[3][7];
    printf("%d\n",coche7);
    printf("Coche 8 = ");
    coche8=matriz[1][8]+matriz[2][8]+matriz[3][8];
    printf("%d\n",coche8);
    printf("Coche 9 = ");
    coche9=matriz[1][9]+matriz[2][9]+matriz[3][9];
    printf("%d\n",coche9);
    printf("Coche 10 = ");
    coche10=matriz[1][10]+matriz[2][10]+matriz[3][10];
    printf("%d\n",coche10);
    printf("Coche 11 = ");
    coche11=matriz[1][11]+matriz[2][11]+matriz[3][11];
    printf("%d\n",coche11);
    printf("Coche 12 = ");
    coche12=matriz[1][12]+matriz[2][12]+matriz[3][12];
    printf("%d\n",coche12);
}

void llenadoAleatoreo(int matriz[FIL1][COL1]){
    srand(time(NULL));
    int a,b;
        for (a=1;a<FIL1;a++){
            for (b=1;b<COL1;b++){
                matriz[a][b]=rand()%101;
            }
        }
        for (b=1;b<COL1;b++){
            printf("%d",matriz[1][b]);
            printf("\t");
        }
            printf("\n");
        for (b=1;b<COL1;b++){
            printf("%d",matriz[2][b]);
            printf("\t");
        }
            printf("\n");
        for (b=1;b<COL1;b++){
            printf("%d",matriz[2][b]);
            printf("\t");
        }
}

void totalGeneral(int matriz[FIL1][COL1]){
    int general;
    general=matriz[1][1]+matriz[1][2]+matriz[1][3]+matriz[1][4]+matriz[1][5]+matriz[1][6]+matriz[1][7]+matriz[1][8]+matriz[1][9]+matriz[1][10]+matriz[1][11]+matriz[1][12]+matriz[2][1]+matriz[2][2]+matriz[2][3]+matriz[2][4]+matriz[2][5]+matriz[2][6]+matriz[2][7]+matriz[2][8]+matriz[2][9]+matriz[2][10]+matriz[2][11]+matriz[2][12]+matriz[3][1]+matriz[3][2]+matriz[3][3]+matriz[3][4]+matriz[3][5]+matriz[3][6]+matriz[3][7]+matriz[3][8]+matriz[3][9]+matriz[3][10]+matriz[3][11]+matriz[3][12];
    printf("TOTAL GENERAL");
    printf("\n%d",general);
}

void listado(int matriz[FIL1][COL1]){
    int b;
    
    for (b=1;b<COL1;b++){
            printf("%d",matriz[1][b]);
            printf("\t");
    }
            printf("\n");
    for (b=1;b<COL1;b++){
            printf("%d",matriz[2][b]);
            printf("\t");
    }
            printf("\n");
    for (b=1;b<COL1;b++){
            printf("%d",matriz[2][b]);
            printf("\t");
    }
}
