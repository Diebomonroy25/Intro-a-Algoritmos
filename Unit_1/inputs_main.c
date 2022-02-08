#include <stdio.h>
#include <stdlib.h>
// atoi(string) es una funcion para convertir de str a int
// atof(array) es una funcion para convertir de un array a un float 
//sprintf(str, "%d", variable) para convertir un int a str
int main(int argc, char** argv){
    int num1 = atoi(argv[1]); // argv[Aqui va el indice del parametro que queramos pasar directo de consola, ej: ./inputs_main 8 5]
    int num2 = atoi(argv[2]);
    int sum = num1+num2;
    printf("La suma de los dos números que pasaste por parametro es %d\n",sum);
    return 0;
}