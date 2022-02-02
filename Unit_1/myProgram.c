#include <stdio.h>
#include "utils.h"
int num;

int main(){
    printf("Pick a number: ");
    scanf("%d",&num);
    int value = isGreaterthan10(num);
    return 0;
}