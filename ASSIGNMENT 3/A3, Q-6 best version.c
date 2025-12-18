#include<stdio.h>
int main()
{
    int c;
    float a,b,result;
    printf("Enter value a : ");
    scanf("%f",&a);
    printf("Enter value b : ");
    scanf("%f",&b);
    printf("\nEnter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n\n");
    printf("Enter your choice (1 - 4) : ");
    scanf("%d",&c);
    switch(c){
        case 1:
        result=a+b;
        printf("Addition is : %.2f",result);
        break;
        
        case 2:
        result=a-b;
        printf("Subtraction is : %.2f",result);
        break;
        
        case 3:
        result=a*b;
        printf("Multiplication is : %.2f",result);
        break;
        
        case 4:
        if(b!=0){
            result=a/b;
            printf("Division is : %.2f",result);
            break;
        }
        else{
            printf("Error! (Division by zero is not allowed)");
        }
        break;
        default:
        printf("Invalid choice!! (Enter your choice 1-4)");
    }
}