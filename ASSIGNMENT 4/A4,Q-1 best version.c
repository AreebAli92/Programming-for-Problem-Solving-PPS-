#include<stdio.h>
int main()
{
    int a,d,n,sum=0;
    printf("To generate A.P upto n terms \n");
    printf("Enter first term (a): ");
    scanf("%d",&a);
    printf("Enter common difference (d) : ");
    scanf("%d",&d);
    printf("Enter number of terms (n) : ");
    scanf("%d",&n);
    if(a>=0 && d>0 && n>0){
        printf("%d ",a);
        sum=a;
        for(int i=1; i<=n; i++){
            sum=sum+d;
            printf("%d ",sum);
        }
    }
    else{
        printf("\nPlease Enter positive value!!");
    }
}