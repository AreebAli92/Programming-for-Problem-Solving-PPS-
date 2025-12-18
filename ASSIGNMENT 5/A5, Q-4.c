#include<stdio.h>
int main()
{
    int terms;
    printf("Enter number of terms : ");
    scanf("%d",&terms);
    if(terms<=0)
    {
        printf("Invalid choice!! Please chose a positive number ");
        return 1;
    }
    else if(terms==1)
    {
        printf("1 is neither prime nor composite number ");
        return 1;
    }
    else
    printf("Prime number up to %d are : ",terms);
    for(int i=2; i<=terms; i++)
    {
        int b=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
            b++;
        }
        if(b==2)
        printf("%d, ",i);
    }
}