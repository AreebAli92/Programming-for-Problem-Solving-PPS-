#include<stdio.h>
int main()
{
    int terms, dec;
    printf("Enter number of terms : ");
    scanf("%d",&terms);
    printf("Enter number of decimal places : ");
    scanf("%d",&dec);
    float sum=0, d=1.3;
    int n=2;
    for(int i=0; i<terms; i++)
    {
        sum=sum+(n/d);
        n=n+2;
        d=d+2.2;
    }
    printf("sum of series : %.*f\n",dec,sum);
}