#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            sum=sum+1;
            printf("%d",sum);
        }
        printf("\n");
    }
}