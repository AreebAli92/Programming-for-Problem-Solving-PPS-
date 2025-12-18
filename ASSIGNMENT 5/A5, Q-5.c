#include<stdio.h>
#include<math.h>
int main()
{
    int b, sum, c, t, r;
    printf("armstrong number between 1 to 1000 are : ");
    for(int i=1; i<=1000; i++)
    {
        t=i;
        b=i;
        sum=0;
        c=0;
        while(b>0)
        {
            b=b/10;
            c++;
        }
        b=i;
        while(b>0)
        {
            r=b%10;
            sum=sum+(pow(r,c));
            b=b/10;
        }
        if(t==sum)
        printf("%d, ",t);
    }
}