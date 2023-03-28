//
//  main.cpp
//  FINAL
//
//  Created by Diego Márquez on 22/10/20.
//
#include <stdio.h>
#include <iostream>

int main() {
    int opcion;
    printf("MENU PRINCIPAL");
    printf("\n1. Saber si tienes seguro social");
    printf("\n2. Saber si tu numero es par o impar");
    printf("\n3. Dia de la semana con la inicial");
    printf("\n4. Saber si una fecha es correcta o incorrecta");
    printf("\n5. Determinar el precio final de un producto ya con ganancia");
    printf("\n6. Calcular la nomina semanal");
    printf("\n7. Alcoholemia Positivo o Negativo");
    printf("\n8. Calcular la hora final de cocción");
    printf("\n9. Determinar que dia seria el domingo de pascua");
    printf("\n10. Menu Banco Letras");
    printf("\n11. Menu Banco Numeros");
    printf("\n¿CUAL OPCION DESEA? = ");
    scanf("%i",&opcion);
    
    if (opcion==1){
        int edad;
        printf("Dame tu edad = ");
        scanf("%i",&edad);
        if(edad>64){
            printf("Seguridad social");
            return 0;
        }
        if (edad<18){
            printf("Execto");
            return 0;
        }
        else{
            printf("Imposible");
        }
    }//1
    if (opcion==2){
        int a;
        printf("Introduce un valor = ");
        scanf("%i",&a);
        if (a>0){
            if(a%2==0){
                printf("El valor %i es par",a);
            }
            else{
                printf("El valor %i es impar",a);
            }
        }
    }//2
    if (opcion==3){
        char dia;
        printf("Ingresa la inicial del dia = ");
        scanf("%c",&dia);
        dia=toupper(dia);
        switch (dia) {
            case 'L':
                printf("Lunes");
            case 'M':
                printf("Martes");
            case 'X':
                printf("Miercoles");
            case 'J':
                printf("Jueves");
            case 'V':
                printf("Viernes");
            case 'S':
                printf("Sabado");
            case 'D':
                printf("Domingo");
        }
    }//3
    if (opcion==4){
        int dia, mes, año;
        printf("Te dire si tu fecha esta bien...");
        printf("\nDame el dia = ");
        scanf("%i",&dia);
        printf("Dame el mes = ");
        scanf("%i",&mes);
        printf("Dame el año = ");
        scanf("%i",&año);
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=31){
                    printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
                    break;
                }
                else{
                    printf("\nINVALIDA");
                    break;
                }
            case 4: case 6: case 9: case 11:
                if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=30){
                    printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
                    break;
                }
                else{
                    printf("\nINVALIDA");
                    break;
                }
            case 2:
                if (año>0&&mes>=1&&mes<=12&&dia>=1&&dia<=28){
                    printf("\nFECHA VALIDA : LA FECHA ES = %i / %i / %i",dia,mes,año);
                    break;
                }
                else{
                    printf("\nFECHA INVALIDA");
                    break;
                }
        }
    }//4
    if (opcion==5){
        float precioInicial, ganancia, precioVenta;
        printf("¿CUAL ES EL PRECIO INICIAL DEL PRODUCTO? = ");
        scanf("%f",&precioInicial);
        if (precioInicial<3){
            ganancia=precioInicial*.15;
            precioVenta=ganancia+precioInicial;
            printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
        }
        if (precioInicial>3&&precioInicial<6){
            precioVenta=precioInicial+.50;
            printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
        }
        if (precioInicial>6){
            ganancia=precioInicial*.25;
            precioVenta=precioInicial+ganancia;
            printf("\nEL PRECIO DE VENTA DEL PRODUCTO ES DE = %.2f",precioVenta);
        }
    }//5
    if (opcion==6){
        int horas, horasExtras;
        float precio, sueldoSemana=0.0, sueldoMensual=0.0, impuestos=0.0;
        printf("¿CUANTAS HORAS TRABAJASTE? = ");
        scanf("%i",&horas);
        printf("¿CUANTO CUESTA LA HORA? = ");
        scanf("%f",&precio);
        if(horas>35){
            horasExtras=horas-35;
            printf("\nTrabajaste %i horas extras",horasExtras);
            sueldoSemana=(35*precio)+(horasExtras*(precio*1.5));
            printf("\nTu sueldo semanal es de = %.2f",sueldoSemana);
            sueldoMensual=sueldoSemana*4;
            printf("\nTu sueldo mensual es de = %.2f",sueldoMensual);
            }
        else{
            sueldoSemana=horas*precio;
            printf("\nTu sueldo semenal es de = %.2f",sueldoSemana);
            sueldoMensual=sueldoSemana*4;
            printf("\nTu sueldo mensual es de = %.2f",sueldoMensual);
        }
        
        if (sueldoMensual<600){
            printf("\nLibre de impuestos");
        }
        if (sueldoMensual>=600&&sueldoMensual<=1000){
            printf("\n\nImpuestos del 20 porciento");
            impuestos=sueldoMensual*.20;
            printf("\nPagas %.2f de impuestos",impuestos);
        }
        if (sueldoMensual>1000){
            printf("\n\nImpuestos del 30 porciento");
            impuestos=sueldoMensual*.30;
            printf("\nPagas %.2f de impuestos",impuestos);
        }
    }//6
    if (opcion==7){
        char vehiculo, tasa;
        float tasaValor;
        printf("Camion (C), Autobus (A), Turismo (T) y Motocicleta (M)");
        printf("\n¿Que vehiculo es? = ");
        scanf("%c",&vehiculo);
        getchar();
        printf("¿Toma: Aire o sangre? = ");
        scanf("%c",&tasa);
        getchar();
        printf("Valor de tasa = ");
        scanf("%f",&tasaValor);
        getchar();
        
        switch (vehiculo) {
            case 'C': case 'c':
                if (tasa=='X'||tasa=='x'){
                    if (tasaValor<.16){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
                if (tasa=='S'||tasa=='s'){
                    if (tasaValor<.4){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
            case 'A': case 'a':
                if (tasa=='X'||tasa=='x'){
                    if (tasaValor<.16){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
                if (tasa=='S'||tasa=='s'){
                    if (tasaValor<.4){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
            case 'T': case 't':
                if (tasa=='X'||tasa=='x'){
                    if (tasaValor<.26){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
                if (tasa=='S'||tasa=='s'){
                    if (tasaValor<.6){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
            case 'M': case 'm':
                if (tasa=='X'||tasa=='x'){
                    if (tasaValor<.16){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
                if (tasa=='S'||tasa=='s'){
                    if (tasaValor<.4){
                        printf("NEGATIVO");
                        break;
                    }
                    else{
                        printf("POSITIVO");
                        break;
                    }
                }
        }
    }//7
    if (opcion==8){
        int horasR, minutosR, segundosR, horasC, minutosC, segundosC, totalHoras, totalMinutos, totalSegundos;
        printf("Te pedire la hora actual");
        printf("\nDame la hora = ");
        scanf("%i",&horasR);
        printf("Dame los minutos = ");
        scanf("%i",&minutosR);
        printf("Dame los segundos = ");
        scanf("%i",&segundosR);
        if (horasR<=24&&minutosR<=60&&segundosR<=60){
            printf("La hora que me diste en HH:MM:SS es = %i:%i:%i",horasR,minutosR,segundosR);
            printf("\n\nDame el tiempo de cocción");
            printf("\nDame la hora = ");
            scanf("%i",&horasC);
            printf("Dame los minutos = ");
            scanf("%i",&minutosC);
            printf("Dame los segundo = ");
            scanf("%i",&segundosC);
            if (horasC<=24&&minutosC<=60&&segundosC<=60) {
                printf("El tiempo de cocción en HH:MM:SS es = %i:%i:%i",horasC,minutosC,segundosC);
                totalHoras=horasR+horasC;
                totalMinutos=minutosR+minutosC;
                totalSegundos=segundosR+segundosC;
                if (totalMinutos>=60){
                    totalMinutos=totalMinutos-60;
                    totalHoras=totalHoras+1;
                }
                if (totalSegundos>=60){
                    totalSegundos=totalSegundos-60;
                    totalMinutos=totalMinutos+1;
                }
                if (totalHoras>=24){
                    totalHoras=totalHoras-24;
                    printf("\n\nEL tiempo final de cocción en HH:MM:SS es a las = %i:%i:%i del dia siguiente",totalHoras,totalMinutos,totalSegundos);
                }
                else{
                    printf("\n\nEL tiempo final de cocción en HH:MM:SS es = %i:%i:%i",totalHoras,totalMinutos,totalSegundos);
                }
            }
            else{
                printf("El tiempo de cocción esta mal");
                return 0;
            }
        }
        else{
            printf("La hora ingresada es incorrecta");
            return 0;
        }
    }//8
    if (opcion==9){
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
    }//9
    if (opcion==10){
        char opcion; int sacar; float ingresar, saldo=1345.50;
        printf("PROGRAMA DE CAJERO AUTOMATICO");
        printf("\nA. Extraer dinero");
        printf("\nB. Ingresar dinero");
        printf("\nC. Ultimos movimientos");
        printf("\nD. Salir del menú");
        printf("\nPULSE LA OPCIÓN DESEADA = ");
        scanf("%c",&opcion);
        opcion=toupper(opcion);
        switch (opcion) {
            case 'A':
                printf("INGRESASTE AL APARTADO DE EXTRAER DINERO");
                printf("¿Cuanto desea sacar?");
                scanf("%i",&sacar);
                printf("Recoga su Dinero");
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 'B':
                printf("Su saldo hasta el momento es de %.2f",saldo);
                printf("\n¿Cuando dinero quieres ingresar a tu cuenta? = ");
                scanf("%f",&ingresar);
                saldo=saldo+ingresar;
                printf("Tu nuevo saldo es de %.2f",saldo);
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 'C':
                printf("TUS ULTIMOS MOVIMIENTOS");
                printf("\nIngreso-$234");
                printf("\nRetiro-$678.25");
                printf("\nIngreso-$789.50");
                printf("\nTu saldo actual es de = %.2f",saldo);
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 'D':
                printf("Salir del menu");
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
        }
    }//10
    if (opcion==11){
        int opcion, sacar; float ingresar, saldo=1345.50;
        printf("PROGRAMA DE CAJERO AUTOMATICO");
        printf("\n1. Extraer dinero");
        printf("\n2. Ingresar dinero");
        printf("\n3. Ultimos movimientos");
        printf("\n4. Salir del menú");
        printf("\nPULSE LA OPCIÓN DESEADA = ");
        scanf("%i",&opcion);
        opcion=toupper(opcion);
        switch (opcion) {
            case 1:
                printf("INGRESASTE AL APARTADO DE EXTRAER DINERO");
                printf("¿Cuanto desea sacar?");
                scanf("%i",&sacar);
                printf("Recoga su Dinero");
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 2:
                printf("Su saldo hasta el momento es de %.2f",saldo);
                printf("\n¿Cuando dinero quieres ingresar a tu cuenta? = ");
                scanf("%f",&ingresar);
                saldo=saldo+ingresar;
                printf("Tu nuevo saldo es de %.2f",saldo);
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 3:
                printf("TUS ULTIMOS MOVIMIENTOS");
                printf("\nIngreso-$234");
                printf("\nRetiro-$678.25");
                printf("\nIngreso-$789.50");
                printf("\nTu saldo actual es de = %.2f",saldo);
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
            case 4:
                printf("Salir del menu");
                printf("\n¡GRACIAS! VUELVA PRONTO");
                break;
        }
    }//11
    char continuar;
    printf("\n\n\n¿DESEA CONTINUA? SI (S) o NO (N) = ");
    getchar();
    scanf("%c",&continuar);
    continuar=toupper(continuar);
    switch (continuar) {
        case 'S':
            printf("\n\n");
            main();
            
        case 'N':
            printf("¡GRACIAS! VUELVA PRONTO");
    }
    printf("\n\n");
}//FIN PROGRAMA
