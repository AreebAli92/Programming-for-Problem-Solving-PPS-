#include<stdio.h>
int main()
{
    int num,unit,tens;
    printf("Enter the number : ");
    scanf("%d",&num);
    unit=num%10;
    tens=(num/10)%10;
    printf("Unit's place : %d\n",unit);
    printf("Ten's place : %d\n",tens);
}