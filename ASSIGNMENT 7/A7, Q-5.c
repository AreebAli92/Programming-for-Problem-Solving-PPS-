#include<stdio.h>
#include<math.h>
int main()
{
    int size;
    printf("Enter no. of elements: ");
    scanf("%d",&size);
    float arr[size];
    float mean, sum=0.0, sd=0.0;
    
    if(size>0) {
        printf("Enter the numbers : \n");
        for(int i=0; i<size; i++) {
           scanf("%f",&arr[i]);
           sum=sum + arr[i];
        }
        mean=sum/size;
        printf("\nMean = %.2f",mean);
        
        for(int i=0; i<size; i++) {
            sd=sd + pow(arr[i] - mean, 2);
        }
        sd=sqrt(sd /(size-1));
        printf("\nStandard Deviation is: %.2f\n",sd);
    }
}