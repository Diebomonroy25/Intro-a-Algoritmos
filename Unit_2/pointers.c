#include <stdio.h>

int edad = 3;
int* miguel;//Cuando se pone el * es para almacenar la dirección de un pointer

int main(){
    miguel = &edad; //& se pone para sacar la direccion de donde se aloja
    printf("dato: %p\n",&miguel);
    printf("edad: %p\n",&edad); //& se pone para identificar la direccion de la variable
    printf("dato: %d\n",*miguel);
}