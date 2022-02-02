#include <stdio.h>

int isGreaterthan10(int num){
    if (num > 10){
        printf("The number you pick ( %d ) is greater than 10\n",num);
    } else if (num == 10){
        printf("The number you pick ( %d ) is 10.\n",num);
    } else {
        printf("The number you pick ( %d ) is not grater than 10.\n",num);
    }
    return 0;
}