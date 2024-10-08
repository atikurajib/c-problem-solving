//Taking 3 float numbers and calculating the average of them.

#include<stdio.h>
int main()
{
    float num1,num2,num3,sum,average;
    printf("Enter the first float number: ");
    scanf("%f",&num1);
    printf("Enter the second float number: ");
    scanf("%f",&num2);
    printf("Enter the third float number: ");
    scanf("%f",&num3);
    sum=num1+num2+num3;
    average=sum/3;
    printf("\nThe average of  these three floating numbers: %.2f\n",average);
    return 0;
}
