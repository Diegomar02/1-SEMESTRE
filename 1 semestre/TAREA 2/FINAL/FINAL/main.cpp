
#include <iostream>
#include <stdio.h>
int main() {
    int opcion;
    printf("¡¡BIEVENIDOS!!\n");
    printf("ELIGE LA OPCIÓN DESEADA\n");
    printf("1. Convertir de pesos a dolares\n");
    printf("2. Sacar la masa\n");
    printf("3. Convertir numero ordinario a romano\n");
    printf("4. Obtener el salario nuevo si le aumentan 25 porciento\n");
    printf("5. Costo de llamada\n");
    printf("6. Presupuesto de un Hospital por Departamento\n");
    printf("7. Calificacion de Matematicas, Quimica y Fisica, con el promedio de las 3\n");
    printf("8. Tu signo Zodiacal\n");
    printf("9. Saber si el año es bisiesto\n");
    printf("10. Saber si un numero es par o impar\n");
    printf("¿QUE OPCION QUIERES? = ");
    scanf("%i",&opcion);
    if (opcion==1){
        float pesos;
        float dolar;
        float total;
        printf("¿Cuando pesos quieres saber en dolares? = ");
        scanf("%f",&pesos);
        printf("¿Cual es el valor de dolar? = ");
        scanf("%f",&dolar);
        total=pesos/dolar;
        printf("Serian %f dolares",total);
    }
    if (opcion==2){

        float presion;
        float volumen;
        float temperatura;
        float total;
        printf("Vamos a sacar la masa, pero necesitamos el valor de presión, volumen y temperatura\n");
        printf("¿Cual es el valor de presión? = ");
        scanf("%f",&presion);
        printf("¿Cual es el valor de volumen? = ");
        scanf("%f",&volumen);
        printf("¿Cual es el valor de temperatura? = ");
        scanf("%f",&temperatura);
        total=(presion*volumen)/(.37*(temperatura+460));
        printf("La masa es %f",total);
    }
    if (opcion==3){
        int numeroPrincipal;
        int numero;
        int unidades;
        int decenas;
        int centenas;
        printf("TE DARE EL NUMERO QUE QUIERAS EN ROMANO");
        printf("\n¿Cual numero quieres saber? = ");
        scanf("%i",&numeroPrincipal);
        unidades=numeroPrincipal%10;
        numero=numeroPrincipal/10;
        decenas=numero%10;
        centenas=numero/10;
        if (numeroPrincipal>100&numeroPrincipal<=999){
        switch (unidades){
            case 1:
                printf("C");
                break;
            case 2:
                printf("CC");
                break;
            case 3:
                printf("CCC");
                break;
            case 4:
                printf("CD");
                break;
            case 5:
                printf("CDL");
                break;
            case 6:
                printf("DC");
                break;
            case 7:
                printf("DCC");
                break;
            case 8:
                printf("DCC");
                break;
            case 9:
                printf("CM");
                break;
        }
        switch (decenas){
            case 1:
                printf("X");
                break;
            case 2:
                printf("XX");
                break;
            case 3:
                printf("XXX");
                break;
            case 4:
                printf("XL");
                break;
            case 5:
                printf("L");
                break;
            case 6:
                printf("LX");
                break;
            case 7:
                printf("LXX");
                break;
            case 8:
                printf("LXXX");
                break;
            case 9:
                printf("XC");
                break;

        }
        switch (centenas){
            case 1:
                printf("I");
                break;
            case 2:
                printf("II");
                break;
            case 3:
                printf("III");
                break;
            case 4:
                printf("IV");
                break;
            case 5:
                printf("V");
                break;
            case 6:
                printf("VI");
                break;
            case 7:
                printf("VII");
                break;
            case 8:
                printf("VII");
                break;
            case 9:
                printf("IV");
                break;
        }
        }
        else{
            printf("ESE NUMERO NO ES VALIDO");
        }
    }
    if (opcion==4){
        float salario;
        printf("¿Cual es tu salario anterior? = ");
        scanf("%f",&salario);
        printf("Tu nuevo salario es %f = ",salario*1.25);
        printf("\n");
    }
    if (opcion==5){
        int minutos;
        int costo=5;
        int tiempoAdicional;
        printf ("¿Cuantos minutos hablaste? = ");
        scanf("%i",&minutos);
        if (minutos<=3){
            printf("El precio es de %i",costo);
            printf("\n");
        }
        if (minutos>=4){
            tiempoAdicional=minutos-3;
            printf("El precio es de %i",5+(tiempoAdicional*3));
        }
    }
    if (opcion==6){
        float presupuesto;
        printf("¿Cual es el presupuesto que tiene el Hospital? = ");
        scanf("%f",&presupuesto);
        printf("El presupuesto por area es el siguientes: \n");
        printf("Ginecologia = %f",presupuesto*.40);
        printf("\nTraumatologia = %f",presupuesto*.30);
        printf("\nPediatria = %f",presupuesto*.30);
    }
    if (opcion==7){
        float examenMate;
        float tarea1Mate;
        float tarea2Mate;
        float tarea3Mate;
        float finalTareasMate;
        float finalMate;
        printf("EMPEZAMOS CON MATEMATICAS");
        printf("\n¿Cual es la calificación del examen? = ");
        scanf("%f",&examenMate);
        examenMate=examenMate*.90;
        printf("HUBO 3 TAREAS");
        printf("\n¿Calificacion de la tarea 1? = ");
        scanf("%f",&tarea1Mate);
        printf("¿Calificacion de la tarea 2? = ");
        scanf("%f",&tarea2Mate);
        printf("¿Calificacion de la tarea 3? = ");
        scanf("%f",&tarea3Mate);
        finalTareasMate=((tarea1Mate+tarea2Mate+tarea3Mate)/3)*.10;
        finalMate=examenMate+finalTareasMate;
        printf("La calificación final de Matematicas es = %f",finalMate);
        printf("\n");
        float examenFisica;
        float tarea1Fisica;
        float tarea2Fisica;
        float finalTareasFisica;
        float finalFisica;
        printf("SEGUIMOS CON FISICA");
        printf("\n¿Cual es la calificacion del examen? = ");
        scanf("%f",&examenFisica);
        examenFisica=examenFisica*.80;
        printf("HUBO 2 TAREAS");
        printf("\n¿Calificacion de la tarea 1? = ");
        scanf("%f",&tarea1Fisica);
        printf("¿Calificacion de la tarea 2? = ");
        scanf("%f",&tarea2Fisica);
        finalTareasFisica=((tarea1Fisica+tarea2Fisica)/2)*.20;
        finalFisica=examenFisica+finalTareasFisica;
        printf("La calificación final de Fisica es = %f",finalFisica);
        printf("\n");
        float examenQuimica;
        float tarea1Quimica;
        float tarea2Quimica;
        float tarea3Quimica;
        float finalTareasQuimica;
        float finalQuimica;
        printf("Y TERMINAMOS CON QUIMICA");
        printf("\n¿Cual es la calificación del examen? = ");
        scanf("%f",&examenQuimica);
        examenQuimica=examenQuimica*.85;
        printf("HUBO 3 TAREAS");
        printf("\n¿Calificacion de la tarea 1? = ");
        scanf("%f",&tarea1Quimica);
        printf("¿Calificacion de la tarea 2? = ");
        scanf("%f",&tarea2Quimica);
        printf("¿Calificacion de la tarea 3? = ");
        scanf("%f",&tarea3Quimica);
        finalTareasQuimica=((tarea1Quimica+tarea2Quimica+tarea3Quimica)/3)*.15;
        finalQuimica=examenQuimica+finalTareasQuimica;
        printf("La calificación final de Matematicas es = %f",finalQuimica);
        printf("\n");
        printf("EL PROMEDIO DE LAS TRES MATERIA ES = %f",(finalMate+finalFisica+finalQuimica)/2);
    }
    if (opcion==8){
        int dia;
        int mes;
        printf("TU SIGNO ZODIACAL");
        printf("\n¿Cual es tu dia de nacimiento? = ");
        scanf("%i",&dia);
        printf("¿En que mes naciste? ej (1,2,3) = ");
        scanf("%i",&mes);
        switch (mes){
            case 1:
                if (dia<=20){
                    printf("Tu signo es = Capricornio");
                }
                if (dia>=21){
                    printf("Tu signo es = Acuario");
                }
                break;
            case 2:
                if (dia<=19){
                    printf("Tu signo es = Acuario");
                }
                if (dia>=20){
                    printf("Tu signo es = Piscis");
                }
                break;
            case 3:
                if (dia<=20){
                    printf("Tu signo es = Piscis");
                }
                if (dia>=21){
                    printf("Tu signo es = Aries");
                }
                break;
            case 4:
                if (dia<=20){
                    printf("Tu signo es = Aries");
                }
                if (dia>=21){
                    printf("Tu signo es = Tauro");
                }
                break;
            case 5:
                if (dia<=20){
                    printf("Tu signo es = Tauro");
                }
                if (dia>=21){
                    printf("Tu signo es = Geminis");
                }
                break;
            case 6:
                if (dia<=20){
                    printf("Tu signo es = Geminis");
                }
                if (dia>21){
                    printf("Tu signo es = Cancer");
                }
                break;
            case 7:
                if (dia<20){
                    printf("Tu signo es = Cancer");
                }
                if (dia>=21){
                    printf("Tu signo es = Leo");
                }
                break;
            case 8:
                if (dia<=20){
                    printf("Tu signo es = Leo");
                }
                if (dia>=21){
                    printf("Tu signo es = Virgo");
                }
                break;
            case 9:
                if (dia<=20){
                    printf("Tu signo es = Virgo");
                }
                if (dia>=21){
                    printf("Tu signo es = Libra");
                }
                break;
            case 10:
                if (dia<=20){
                    printf("Tu signo es = Libra");
                }
                if (dia>=21){
                    printf("Tu signo es = Escorpion");
                }
                break;
            case 11:
                if (dia<=20){
                    printf("Tu signo es = Escorpion");
                }
                if (dia>=21){
                    printf("Tu signo es = Sagitario");
                }
                break;
            case 12:
                if (dia<=20){
                    printf("Tu signo es = Sagitario");
                }
                if (dia>=21){
                    printf("Tu signo es = Capricornio");
                }
                break;
            }
    }
    if (opcion==9){
        int anno;
        int res;
        int res1;
        int res2;
        printf("Ingresa el año para saber si es bisiesto o no = ");
        scanf("%i",&anno);
        res=anno%4;
        res1=anno%100;
        res2=anno%400;
        if (res==0&res1==0&res2==0){
            printf("El años es bisiesto");
        }
        else {
            printf("El año no es bisiesto");
        }
    }
    if (opcion==10){
        int numero;
        int res;
        printf("¿Que numero quieres saber si es par o impar? = ");
        scanf("%i",&numero);
        res=numero%2;
        if (res==0){
            printf("El numero es par");
        }
        else{
            printf("El numero es impar");
        }
    }
    int continuar;
    printf("\n");
    printf("¿DESEA CONTINUAR...?");
    printf("\nSi (1) y No (Cualquier otro numero) = ");
    scanf("%i",&continuar);
    if (continuar==1){
        main();
    }
    else{
        printf("GRACIAS!!! Vuelva Pronto...\n");
    }
}
