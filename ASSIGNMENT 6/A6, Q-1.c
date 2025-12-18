#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter 5 value : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the 5 values you have entered are : " );
    for(int i=0; i<5; i++)
    {
        printf("%d, ",a[i]);
    }
}