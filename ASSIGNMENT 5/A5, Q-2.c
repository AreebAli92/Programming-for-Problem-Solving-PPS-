#include<stdio.h>
int main()
{
    int a=0, b=1, c=0, range;
    printf("NON Fibnonacci printer : \n");
    printf("Please Enter the Range : ");
    scanf("%d",&range);
    printf("NON Fibonacci number up to %d are : ",range);
    for(int i=0; i<=range; i++)
    {
        if(i==c)
        {
            c=a+b;
            a=b;
            b=c;
            continue;
        }
        printf("%d, ",i);
    }
    printf("\n");
}