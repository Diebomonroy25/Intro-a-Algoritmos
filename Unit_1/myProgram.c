#include <stdio.h>
#include "utils.h"
int num;

int main(){
    printf("Escribe un número: ");
    scanf("%d",&num);
    int value = isGreaterthan10(num);
    if (value == 1){
        printf("The number %d is greater than 10.\n",num);
    } else {
        printf("The number %d is not greater than 10.\n",num);
    }
    return 0;
}