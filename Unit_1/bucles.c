#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    printf("--While loop--\n");
    while(count <= 100){
        printf("While Count: %d\n",count);
        count = count + 1;
    }
    printf("--For loop definite--\n");
    for (int i = 1; i <= 100; i = i+1){
        printf("For Count: %d\n",i);
    }
    printf("--For loop indefinite--\n");
    for (int i = 1;;i = i+1){
        printf("For Count: %d\n",i);
        if (i >= 125){
            break;
        }
    }
}