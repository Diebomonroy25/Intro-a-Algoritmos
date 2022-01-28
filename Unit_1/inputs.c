#include <stdio.h>

int num1; //declarando la variable
int num2;

int main(){

    printf("Enter num1\n\tnum1: "); // así se hace un print en pantalla
    scanf("%d",&num1); // inputs por teclado
    printf("Enter num2\n\tnum2: ");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("La suma de los dos números es: %d\n",sum); // se ocupa %d para decir que una variable con formato de texto se va guardar ahí. 

    return 0;
}