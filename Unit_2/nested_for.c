#include <stdio.h>
#include <stdlib.h>
#include "../librerias/utils.h"

int main(int argc, char** argv){
    
    

    for (int i;i <= atoi(argv[1]);i++){
        printf("i: %d\n",i);
        sleep(2);
        for (int j = 1; j <= atoi(argv[2]); j++){
            printf("\tj: %d\n",j);
            sleep(0.5);
        }
    }
    
    return 0;
}