#include<stdio.h>
int main()
{
    int a, d, n, i, sum=0;
    printf("To calculate the A.P. of first n terms : ");
    printf("\n");
    printf("Enter 1st term : ");
    scanf("%d",&a);
    printf("Enter the common difference (d) : ");
    scanf("%d",&d);
    printf("Enter the number of terms (n) : ");
    scanf("%d",&n);
    printf("\n");
    printf("A.P. of first %d terms is : %d ",n,a);
    sum=a;
    for(i=1; i<=n ; i++)
    {
        sum=sum+d;
        printf("%d ",sum);
    }
}