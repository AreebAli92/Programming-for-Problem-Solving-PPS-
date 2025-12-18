#include<stdio.h>
int main()
{
    float a, b;
    int c;
    printf("Enter number a : ");
    scanf("%f",&a);
    printf("Enter number b : ");
    scanf("%f",&b);
    printf("\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("\n");
    printf("Enter your choice between 1 to 4 : ");
    scanf("%d",&c);
    printf("\n");
    switch(c)
    {
        case 1: float sum=a+b;
        printf("Addition is : %.2f\n",sum);
        break;
        
        case 2: float sub=a-b;
        printf("Subtraction is : %.2f\n",sub);
        break;
        
        case 3: float mul=a*b;
        printf("Multiplication is : %.2f\n",mul);
        break;
        
        case 4: float div=a/b;
        printf("Division is : %.2f\n",div);
        break;
        default:
        printf("Enter your choice between 1 to 4 !!");
    }
}