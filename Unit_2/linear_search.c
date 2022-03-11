#include <stdio.h>

void search_value(int array[5],int len_array,int search){
    int index_value;
    int i;
    for (i = 0; i < len_array; i++){
        index_value = array[i];    
        if (index_value == search){
            printf("Your search value is in the index: %d\n",i);
            break;
        }
    }
    if (i == len_array) printf("Your search value is not in the array\n");
    return;
}

int main(){
    int array[5] = {50, 5, 1, 37, 4};
    int search = 50;

    search_value(array,5,search);

    return 0;
}