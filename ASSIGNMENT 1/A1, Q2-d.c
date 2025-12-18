#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float distance, slope;
    printf("Enter co-ordinates of 1st point (x1 y1) : \n");
    scanf("%d %d",&x1,&y1);
    printf("Enter co-ordinates of 2nd point (x2 y2) : \n");
    scanf("%d %d",&x2,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between them is : %.2f\n",distance);
    if(x2 != x1){
        slope=(y2-y1)/(x2-x1);
        printf("slope is : %.2f\n",slope);
    }
    else{
        printf("slope is undefined!! (vertical line)");
    }
}