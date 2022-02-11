#include <stdio.h>

int main(){
    long int num1;

    printf("Escribe un número: ");
    scanf("%ld",&num1);

    int residuo = num1%2;

    if (residuo == 0){
        printf("Tu número (%ld) es par\n",num1);
    }else{
        printf("Tu número (%ld) es impar\n",num1);
    }

    return 0;
}