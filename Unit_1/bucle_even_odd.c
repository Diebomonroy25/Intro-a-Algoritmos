#include <stdio.h>
#include <stdlib.h>
#include "/mnt/c/Users/diego/OneDrive - UNIVERSIDAD NACIONAL AUTÓNOMA DE MÉXICO/Diego Monroy/UNI/Intro a Algoritmos/librerias/utils.h"

int main(int argc, char** argv){
    int numfor = atoi(argv[1]);
    int numwhile = atoi(argv[2]);

    if (numwhile%2 == 0);{
        numwhile = numwhile-1;
    }

    for (int i = 0; i <= numfor; i = i+2){
        printf("Bucle For: %d\n",i);
        sleep(1000);
    }
   long int i = 1;
    while (i <= numwhile-1){
        i = i + 2;
        printf("Bucle while:%ld\n",i);
        sleep(1000);
    }    
}