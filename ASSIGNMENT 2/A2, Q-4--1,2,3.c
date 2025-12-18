#include<stdio.h>
int main()
{
    int a=5, b=10, c, d, e;
    printf("a=%d, b=%d\n",a,b);
    printf("%d > %d : %d\n",a,b, a > b);
    printf("%d < %d : %d\n",a,b, a < b);
    printf("%d == %d : %d\n",a,b, a == b);
    printf("%d != %d : %d\n",a,b, a != b);
    a += b;
    printf("Addition of a and b : %d\n",a);
    a -= b;
    printf("Subtraction of a and b : %d\n",a);
    a *= b;
    printf("Multiplication of a and b : %d\n",a);
    a /= b;
    printf("Division of a and b : %d\n",a);
    c=a<6 && b<20;
    d=a>6 || b<20;
    e=!a;
    printf("use of logical and : %d\n",c);
    printf("use of logical or : %d\n",d);
    printf("use of logical not : %d\n",e);
}