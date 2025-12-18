#include<stdio.h>
int main()
{
    int n,b=0;
    printf("To check a prime number \n");
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid choice!! please chose a positive number ");
        return 1;
    }
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        b++;
    }
    if(b==2)
    printf("%d is a prime number",n);
    else
    printf("%d is a composite number",n);
}