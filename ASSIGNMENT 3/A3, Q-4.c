#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root1, root2, discriminant;
    printf("Enter coefficient of x square : ");
    scanf("%d",&a);
    printf("Enter coefficient of x  : ");
    scanf("%d",&b);
    printf("Enter coefficient : ");
    scanf("%d",&c);
    discriminant=(b*b)-4*a*c;
    if(discriminant > 0)
    {
        root1=(-b+sqrt(discriminant)) / (2.0*a);
        root2=(-b-sqrt(discriminant)) / (2.0*a);
        printf("The roots are : %.2f  and  %.2f\n",root1,root2);
    }
    else if(discriminant == 0)
    {
        root1=-b / (2.0*a);
        printf("The roots are : %.2f\n",root1);
    }
    else
    {
        float realPart = -b / (2.0*a);
        float imagPart = sqrt(-discriminant) / (2.0 * a);
         printf("The roots are: %.2f + %.2f and %.2f - %.2f\n", realPart, imagPart, realPart, imagPart);
    }
}