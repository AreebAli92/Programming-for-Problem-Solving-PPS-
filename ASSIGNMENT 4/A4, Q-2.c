#include<stdio.h>
int main()
{
    int n, a=0, b=1, c, i;
    printf("Enter the range: ");
    scanf("%d",&n);
    
    if(n>0){
        printf("Fibonacci series : ");
        for(i=0; i<n; i++) {
           if(i<=1) {
               c=i;
            }
           else {
               c=a+b;
               a=b;
               b=c;
            } 
            printf("%d, ",c);
        }
    }
    else
    printf("Enter natural number!!");
    printf("\n");
}