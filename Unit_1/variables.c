#include <stdio.h>
#include "sum.h"

int edad = 19; // integer
float pi = 3.1416; // flotante (con punto decimal)
char* name = "Diego Monroy"; // string siempre con comillas dobles
char sexo = 'M'; // caracteres con comilla simple


int main(){
    int after10years = suma(edad, 10);
    printf("Mi edad después de 10 años %d\n",after10years);
    return 0;
}