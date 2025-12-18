#include<stdio.h>
#include <math.h>
int main()
{
    int i, j, k, p;
    float s, a;
    printf("Enter three side of the Triangle : \n");
    scanf("%d %d %d",&i,&j,&k);
    p=i+j+k;
    s=p/2.0;
    a=sqrt(s*(s-i)*(s-j)*(s-k));
    printf("Perimeter of a Triangle : %d\n",p);
    printf("Area of a Triangle : %.2f",a);
}