#include <stdio.h>

void ordering_array(int array[4],int len_array){
    int j = 0;
    int var_temp;
    int final_array[4] = {array[0],array[1],array[2],array[3]};
    int var1;
    int var2;
    for (int i = 1; i <= len_array*2; i++){
        var1 = final_array[j];
        var2 = final_array[j+1];
        ///printf("var1: %d, var2: %d //// ",var1,var2);
        if (var1 > var2){
            var_temp = var2;
            var2 = var1;
            var1 = var_temp;
            final_array[j] = var1;
            final_array[j+1] = var2;
        }else{
            final_array[j] = var1;
            final_array[j+1] = var2;
        }
        ///printf("%d change: {%d, %d, %d, %d}\n",i,final_array[0],final_array[1],final_array[2],final_array[3]);
        j++;
        if (j == 3) j = 0;
    }
    printf("Final Array: {%d, %d, %d, %d}\n",final_array[0],final_array[1],final_array[2],final_array[3]);
    return;
}

int main(){
    int num1;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    int num2;
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int num3;
    printf("Enter the third number: ");
    scanf("%d",&num3);
    int num4;
    printf("Enter the last number: ");
    scanf("%d",&num4);

    int array[4] = {num1, num2, num3, num4};
    printf("The original array is {%d, %d, %d, %d}\n",array[0],array[1],array[2],array[3]);
    int len_array = 4;
    ordering_array(array,len_array);
    return 0;
}