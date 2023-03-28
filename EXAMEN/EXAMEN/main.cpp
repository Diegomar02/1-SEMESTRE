//
//  main.cpp
//  EXAMEN
//
//  Created by Diego Márquez on 26/10/20.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    int dia,  mes, year, horas, minutos, segundos;
    year=1990+rand()%21;
    dia=1+rand()%7;
    mes=1+rand()%12;
    horas=01+rand()%24;
    minutos=01+rand()%59;
    segundos=01+rand()%59;
    
    printf("%i,%i,%i\n",dia,mes,year);
    
                switch (mes) {
                    case 1:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de enero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 2:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de febrero del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;

                        }
                    case 3:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de marzo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;

                        }
                    case 4:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de abril del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;

                        }
                    case 5:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de mayo del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;

                        }
                    case 6:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de junio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 7:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de julio del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 8:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de agosto del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de agosto del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de agosto del año %i son las %i:%i:%i",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de agosto del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de agosto del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de agosto del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de agosto del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;

                        }
                    case 9:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de septiembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 10:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de ocutbre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de octubre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 11:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de noviembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                        }
                    case 12:
                        switch (dia) {
                            case 1:
                                printf("Hoy es lunes del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 2:
                                printf("Hoy es martes del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 3:
                                printf("Hoy es miercoles del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 4:
                                printf("Hoy es jueves del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 5:
                                printf("Hoy es viernes del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 6:
                                printf("Hoy es sabado del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                            case 7:
                                printf("Hoy es domingo del mes de diciembre del año %i son las %i:%i:%i\n",year,horas,minutos,segundos);
                                return 0;
                        }
                }
}
