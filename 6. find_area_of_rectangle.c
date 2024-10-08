//The length & breadth of a rectangle are input through the keyboard. Find out the rectangle’s area

#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("\nArea of Rectangle is %d\n",area);
    return 0;
}
