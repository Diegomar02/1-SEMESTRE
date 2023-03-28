//
//  main.cpp
//  FINAL
//
//  Created by Diego Márquez on 22/11/20.
//

#include <iostream>

#include <iostream>
#include <stdio.h>

//PROTOTIPOS

void apartado1();
void apartado2();
int datosAnalizar();
int hombreOmujer();
int edadHoM();
void apartado3();
void apartado4();
void apartado5();
void regresar();


int main() {
    int opcionx;
    printf("Hola Maestra!! Seleccione el apartado del examen que desee revisar");
    printf("\nApartado 1");
    printf("\nApartado 2");
    printf("\nApartado 3");
    printf("\nApartado 4");
    printf("\nApartado 5");
    printf("\n¿Qué apartado sera? = ");
    scanf("%i",&opcionx);
    
    
    if (opcionx==1){
        apartado1();
    }
    if(opcionx==2){
        apartado2();
    }
    if(opcionx==3){
        apartado3();
    }
    if(opcionx==4){
        apartado4();
    }
    if(opcionx==5){
        apartado5();
        
    }
    printf("\n");
}
    







void apartado1(){
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
            
        }
        else{
            printf("El numero no es perfecto");
            
        }
        i=i+1;
    }
    while (i<=n);
    printf("\n\n");
    int continuar;
    printf("¿Desea regresar al menu? Si (1) o No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        printf("\n\n");
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
}

int hombreOmujer(){
    int HoM;
    printf("\n¿Eres hombre (1) o Mujer (2)? = ");
    scanf("%i",&HoM);
    return HoM;
}
int edadHoM(){
    int edad;
    printf("¿Cuantos años tienes? = ");
    scanf("%i",&edad);
    return edad;
    
}
int datosAnalizar(){
    int opcion;
    printf("¿Cuantas personas quieres analizar? = ");
    scanf("%d",&opcion);
    return opcion;
}
void apartado2(){
    int i, opcion, edad, HoM;
    opcion=datosAnalizar();
    for (i=1;i<=opcion;i++){
        printf("\nAnalizando persona %i",i);
        HoM=hombreOmujer();
        edad=edadHoM();
        if (edad<25&&HoM==1){
            printf("Paga 1,000");
        }
        if (edad>24&&HoM==1){
            printf("Paga 700");
        }
        if (edad<21&&HoM==2) {
            printf("Paga 800");
        }
        if (edad>20&&HoM==2){
            printf("Paga 500");
        }
    }
    printf("\n\n");
    int continuar;
    printf("¿Desea regresar al menu? Si (1) o No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        printf("\n\n");
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
}
void apartado3(){
    int tamaño, a, b;
    printf("Ingresa el tamaño del Cubo = ");
    scanf("%d",&tamaño);
    printf("\n");
    for(int a=0;a<tamaño;a++){
        printf("\t*");
    }
    printf("\n");
    for(int a=0;a<tamaño-2;a++){
        printf("\t*");
            for(int b=0;b<tamaño-2;b++){
                printf("\t%i",tamaño);
            }
        printf("\t*");
        printf("\n");
    }
    for(int a=0;a<tamaño;a++){
        printf("\t*");
    }
    printf("\n\n");
    int continuar;
    printf("¿Desea regresar al menu? Si (1) o No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        printf("\n\n");
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
}
void apartado4(){
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
    printf("\n\n");
    int continuar;
    printf("¿Desea regresar al menu? Si (1) o No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        printf("\n\n");
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
}
void apartado5(){
    int li,ls,i;
    printf("Limite Inferior = ");
    scanf("%i",&li);
    printf("Limite Superior = ");
    scanf("%i",&ls);
    
    if (li<ls){
        li=li;
        ls=ls;
    }
    if(ls<li){
        li=ls;
        ls=li;
    }
    printf("Los numeros en este rango = ");
    for (i=li;i<=ls;i++){
        printf("%i",i);
        if (i<ls){
            printf(",");
        }
    }
    printf("\n");
    printf("Los numero perfectos en ese rango son = ");
    int cons=2,d,exponente=2;
    for (i=li;i<=ls;i++){
        int n1,n2;
        n1=pow(cons,exponente-1);
        n2=pow(cons,exponente) - 1;
        d=(n1 * n2);
        if (exponente<=2){
            exponente=exponente+1;
        }
        else{
            exponente=exponente+2;
        }
        if (d>=li&&d<=ls){
            printf("%i",d);
            if (d<ls){
                printf(",");
            }
        }
    }
    printf("\n\nMAESTRA, SE PASO DE LANZA CON ESTE APARTADO (5) JAJAJAJA");
    printf("\n\n");
    int continuar;
    printf("¿Desea regresar al menu? Si (1) o No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        printf("\n\n");
        main();
    }
    else{
        printf("GRACIAS!!!");
    }
}

