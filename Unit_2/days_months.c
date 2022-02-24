#include <stdio.h>
#include "/mnt/c/Users/diego/OneDrive - UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO/Diego Monroy/UNI/Intro a Algoritmos/librerias/utils.h"

int main(){

    for (int m = 1; m <= 12; m = m + 1){ ///primer bucle para escribir el mes
        printf("Mes %d\n",m);
        int tipo = m%2; /// variable para evaluar si el mes es par o es impar

        if (m == 2){///condicion para evaluar los días del mes 2
            
            ///bucle para imprimir los días del mes 2
            printf("(");
            for (int d = 1; d <= 28; d++) printf("%d, ",d);
            printf(")\n\n");

        }else if(m <= 7){///condicion para evaluar los primeros 7 meses
            
            if (tipo==0){///condicion para evaluar que pasa con los meses pares
            
                ///bucle para imprimir los días de los meses pares
                printf("(");
                for (int d = 1; d <= 30; d++) printf("%d, ",d);
                printf(")\n\n");

            }else if(tipo != 0){///condicion para evaluar que pasa con los meses impares
            
                ///bucle para imprimir los días de los meses impares
                printf("(");
                for (int d = 1; d <= 31; d++) printf("%d, ",d);
                printf(")\n\n");

            }

        }else if(m > 7){///condicion para evaluar los últimos 5 meses

            if (tipo==0){///condicion para evaluar que pasa con los meses pares
            
                ///bucle para imprimir los días de los meses pares
                printf("(");
                for (int d = 1; d <= 31; d++) printf("%d, ",d);
                printf(")\n\n");

            }else if(tipo != 0){///condicion para evaluar que pasa con los meses impares
            
                ///bucle para imprimir los días de los meses impares
                printf("(");
                for (int d = 1; d <= 30; d++) printf("%d, ",d);
                printf(")\n\n");

            }
        }
        sleep(1);
    }
}