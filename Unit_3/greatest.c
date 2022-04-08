#include <stdio.h>

int main (){
    printf("---Select 3 numbers---\n");
    int value_1;
    printf("First: ");
    scanf("%d",&value_1);
    int value_2;
    printf("Second: ");
    scanf("%d",&value_2);
    int value_3;
    printf("Third: ");
    scanf("%d",&value_3);

    if (value_1>value_2&&value_1>value_3) printf("The max value is %d\n",value_1);        
    else if (value_2>value_1&&value_2>value_3) printf("The max value is %d\n",value_2);        
    else printf("The max value is %d\n",value_3);
    return 0;
}