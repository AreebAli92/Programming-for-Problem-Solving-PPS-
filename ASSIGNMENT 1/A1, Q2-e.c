#include<stdio.h>
int main()
{
    float c, m;
    printf("Enter the temperature in Celsius : ");
    scanf("%f",&c);
    m=(c*9/5)+32;
    printf("In Fahrenheit : %.1f",m);
}