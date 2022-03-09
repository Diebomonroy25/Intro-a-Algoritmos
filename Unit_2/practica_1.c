#include <stdio.h>

void alternating_sum(int array[5], int len_array){
    int i = 0;///variable para usar como index del array
    int a = 0;
    while (i < len_array){ ///Bucle que sumará el valor del index a la variable 'a' para los index pares
        a = a + array[i];
        i = i + 2;
    }
    int b = 0;
    i = 1;
    while (i < len_array){///Bucle que sumará el valor del index a la variable 'b' para los index nones
        b = b + array[i];
        i = i + 2;
    }
    printf("{%d, %d}\n",a,b);
    return;
}


int main(){
    int people[5] = {50,60,60,45,70};///declaración del array
    alternating_sum(people,5);
    return 0;
}