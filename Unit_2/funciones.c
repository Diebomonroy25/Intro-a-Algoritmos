#include <stdio.h>
//Se define la funcion
int suma_numeros(int a,int b){
    int resultado;
    resultado = a + b;
    return resultado;
}

void multiplica_numeros(int* a, int* b){///Se pone el asterísco para almacenar lo que vale la variable sacando la dirección del pointer
    *a = *a * 2;
    *b = *b * 2;
    return;
}

int main(int argc, char**argv){
    int a = 10;
    int b = 20;

    printf("Suma de 10 + 20 = %d\n",suma_numeros(a, b)); 
    multiplica_numeros(&a,&b);///Se pone el & para almacenar la dirección del piointer
    printf("La multiplicacion de 10 x 2 y 20 x 2 es:\n%d y %d\n",a,b);
}
