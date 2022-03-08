#include <stdio.h>

void print_array(int array[3],int len_array){
    int i = 0;
    printf("{");
    while (i < len_array){
        printf("%d",array[i]);
        if (i < len_array-1){
            printf(",");
        }
        i = i + 1;
    }
    printf("}\n");
}


int main(){
    int len_array = 3;
    int array [3] = {5, 2, 3};
    print_array(array,3);
    return 0;
}