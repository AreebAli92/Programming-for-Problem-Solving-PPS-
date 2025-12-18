#include<stdio.h>
int main()
{
    int n, b, r, s=0;
    printf("Enter number : ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(b==s)
    {
        printf("The given number is Palindrome : %d",s);
    }
    else
    {
        printf("The given number is NOT Palindrome : %d",s);
    }
}