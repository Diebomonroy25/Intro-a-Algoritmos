#include <stdio.h>

int main(){
    long int i;
    printf("Ingresa un número: ");
    scanf("%ld",&i);

    if (i==3||i==5||i==7||i==2){
        printf("Tu número (%ld) es primo",i);
    }else if (i%2==0){
        printf("Tu número (%ld) no es primo",i);
    }else if(i%3==0){
        printf("Tu número (%ld) no es primo",i);
    }else if(i%5==0){
        printf("Tu número (%ld) no es primo",i);
    }else if(i%7==0){
        printf("Tu número (%ld) no es primo",i);
    }else{
        printf("Tu número (%ld) es primo",i);
    }
    printf("\n");
}