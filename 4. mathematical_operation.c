//Taking 2 integer numbers as input and then add, subtract, multiply and divide them. Finally print the output results.

#include<stdio.h>
int main()
{
    int num1,num2,add,sub,multi,div;
    printf("Enter the first integer: ");
    scanf("%d",&num1);
    printf("Enter the second integer: ");
    scanf("%d",&num2);
    add=num1+num2;
    printf("\nAdd: %d\n",add);
    sub=num1-num2;
    printf("Subtract: %d\n",sub);
    multi=num1*num2;
    printf("Multiply: %d\n",multi);
    div=num1/num2;
    printf("Divide: %d\n",div);
    return 0;
}
