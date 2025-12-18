#include<stdio.h>
#include<math.h>

void realroots(int a, int b, int c) {
    int discriminant, root1, root2;
    discriminant = b*b - 4 * a * c;
    
    if(discriminant > 0) {
        root1= -b + (sqrt(discriminant)/2*a);
        root2= -b - (sqrt(discriminant)/2*a);
        printf("Roots are real and distinct: \n");
        printf("root 1 = %d",root1);
        printf("\nroot 2 = %d",root2);
    }
    
    else if(discriminant == 0) {
        root1= -b /(2*a);
        printf("Roots are real and equal: ");
        printf("root = %d",root1);
    }
    
    else {
        printf("No real roots exist for negative discriminant!!\n");
    }
}

int main()
{
    int a,b,c;
    printf("To calculate the real roots of a qudratic equation (ax^2 + bx + c) \n");
    printf("Enter Coefficient a, b and c : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0) {
        printf("coefficient 'a' cannot be zero for quadratic equation!!");
    }
    else {
        realroots(a,b,c);
    }
}