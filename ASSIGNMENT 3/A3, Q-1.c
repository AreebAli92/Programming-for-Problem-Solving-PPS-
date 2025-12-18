#include<stdio.h>
int main()
{
    int a1, a2;
    printf("Enter number a1 : ");
    scanf("%d",&a1);
    printf("Enter number a2 : ");
    scanf("%d",&a2);
    if((a1*a1) > (a2*a2))
    {
        printf("Magnitude of %d > %d ",a1,a2);
    }
    else if((a1*a1) < (a2*a2))
    {
        printf("Magnitude of %d > %d",a2,a1);
    }
    else
    {
        printf("Magnitude of %d = %d",a1,a2);
    }
}