
#include <iostream>

int main(){
    char helados[22][50];
    int ganancias[21][7];
    int i;
    
    for (i=1;i<21;i++){
        printf("Introduce el nombre del helado %i = ",i);
        scanf("%s",&helados[i][50]);
    }
    for (i=1;i<21;i++){
        printf("Ganancias del helado %s",helados[i]);
        printf("\nIngresa el Mes 1 = ");
        scanf("%i",&ganancias[i][1]);
        printf("\nIngresa el Mes 2 = ");
        scanf("%i",&ganancias[i][2]);
        printf("\nIngresa el Mes 3 = ");
        scanf("%i",&ganancias[i][3]);
        printf("\nIngresa el Mes 4 = ");
        scanf("%i",&ganancias[i][4]);
        printf("\nIngresa el Mes 5 =");
        scanf("%i",&ganancias[i][5]);
        printf("\nIngresa el Mes 6 = ");
        scanf("%i",&ganancias[i][6]);
        
        
    }
    int h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,h11,h12,h13,h14,h15,h16,h17,h18,h19,h20;
    h1=ganancias[1][1]+ganancias[1][2]+ganancias[1][3]+ganancias[1][4]+ganancias[1][5]+ganancias[1][6];
    h2=ganancias[2][1]+ganancias[2][2]+ganancias[2][3]+ganancias[2][4]+ganancias[2][5]+ganancias[2][6];
    h3=ganancias[3][1]+ganancias[3][2]+ganancias[3][3]+ganancias[3][4]+ganancias[3][5]+ganancias[3][6];
    h4=ganancias[4][1]+ganancias[4][2]+ganancias[4][3]+ganancias[4][4]+ganancias[4][5]+ganancias[4][6];
    h5=ganancias[5][1]+ganancias[5][2]+ganancias[5][3]+ganancias[5][4]+ganancias[5][5]+ganancias[5][6];
    h6=ganancias[6][1]+ganancias[6][2]+ganancias[6][3]+ganancias[6][4]+ganancias[6][5]+ganancias[6][6];
    h7=ganancias[7][1]+ganancias[7][2]+ganancias[7][3]+ganancias[7][4]+ganancias[7][5]+ganancias[7][6];
    h8=ganancias[8][1]+ganancias[8][2]+ganancias[8][3]+ganancias[8][4]+ganancias[8][5]+ganancias[8][6];
    h9=ganancias[9][1]+ganancias[9][2]+ganancias[9][3]+ganancias[9][4]+ganancias[9][5]+ganancias[9][6];
    h10=ganancias[10][1]+ganancias[10][2]+ganancias[10][3]+ganancias[10][4]+ganancias[10][5]+ganancias[10][6];
    h11=ganancias[11][1]+ganancias[11][2]+ganancias[11][3]+ganancias[11][4]+ganancias[11][5]+ganancias[11][6];
    h12=ganancias[12][1]+ganancias[12][2]+ganancias[12][3]+ganancias[12][4]+ganancias[12][5]+ganancias[12][6];
    h13=ganancias[13][1]+ganancias[13][2]+ganancias[13][3]+ganancias[13][4]+ganancias[13][5]+ganancias[13][6];
    h14=ganancias[14][1]+ganancias[14][2]+ganancias[14][3]+ganancias[14][4]+ganancias[14][5]+ganancias[14][6];
    h15=ganancias[15][1]+ganancias[15][2]+ganancias[15][3]+ganancias[15][4]+ganancias[15][5]+ganancias[15][6];
    h16=ganancias[16][1]+ganancias[16][2]+ganancias[16][3]+ganancias[16][4]+ganancias[16][5]+ganancias[16][6];
    h17=ganancias[17][1]+ganancias[17][2]+ganancias[17][3]+ganancias[17][4]+ganancias[17][5]+ganancias[17][6];
    h18=ganancias[18][1]+ganancias[18][2]+ganancias[18][3]+ganancias[18][4]+ganancias[18][5]+ganancias[18][6];
    h19=ganancias[19][1]+ganancias[19][2]+ganancias[19][3]+ganancias[19][4]+ganancias[19][5]+ganancias[19][6];
    h20=ganancias[20][1]+ganancias[20][2]+ganancias[20][3]+ganancias[20][4]+ganancias[20][5]+ganancias[20][6];
    
    int t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20;
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[1],ganancias[1][1],ganancias[1][2],ganancias[1][3],ganancias[1][4],ganancias[1][5],ganancias[1][6],h1);
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[2],ganancias[2][1],ganancias[2][2],ganancias[2][3],ganancias[2][4],ganancias[2][5],ganancias[2][6],h2);
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[3],ganancias[3][1],ganancias[3][2],ganancias[3][3],ganancias[3][4],ganancias[3][5],ganancias[3][6],h3);
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[4],ganancias[4][1],ganancias[4][2],ganancias[4][3],ganancias[4][4],ganancias[4][5],ganancias[4][6],h4);
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[5],ganancias[5][1],ganancias[5][2],ganancias[5][3],ganancias[5][4],ganancias[5][5],ganancias[5][6],h1);
    printf("%s \t %i \t %i \t %i \t %i \t %i \t %i \t %i",helados[6],ganancias[6][1],ganancias[6][2],ganancias[6][3],ganancias[6][4],ganancias[6][5],ganancias[6][6],h1);
    
}
