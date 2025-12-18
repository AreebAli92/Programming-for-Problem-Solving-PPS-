#include<stdio.h>
int main()
{
    int limit=10000, a;
    printf("Amicable pairs upto %d: \n",limit);
    for(a=2; a<=limit; a++)
    {
        int sumA=0;
        for(int i=1; i<a; i++)
        {
            if(a%i==0)
            {
                sumA=sumA+i;
            }
        }
        int b=sumA;
        int sumB=0;
        for(int j=1; j<b; j++)
        {
            if(b%j==0)
            {
                sumB=sumB+j;
            }
        }
        if(sumB==a && a<b && b<=limit)
        {
            printf("(%d, %d)\n",a,b);
        }
    }
}