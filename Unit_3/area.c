#include <stdio.h>

int main(){
    int long_side;
    int short_side;
    printf("Write the long side: ");
    scanf("%d",&long_side);
    printf("Write the short side: ");
    scanf("%d",&short_side);
    int area = long_side*short_side;
    if (long_side == short_side) printf("This is a square with an area of %d\n",area);
    else printf("This is a rectangle with an area of %d\n",area);
}