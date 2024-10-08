//Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.fahrenheit=(celcius*9/5)+32

#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\nTemperature in Celsius: %.2f\n",celsius);
    return 0;
}
