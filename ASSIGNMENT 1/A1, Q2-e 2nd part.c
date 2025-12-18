#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("In Celsius : %.1f",c);
}