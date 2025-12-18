#include<stdio.h>
int main()
{
    int arr[5], n=5, temp, smallestindx;
    printf("Enter your Array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nHere's your Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
    
    for(int i=0; i<n-1; i++)
    {
        smallestindx=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[smallestindx])
            {
                smallestindx=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[smallestindx];
        arr[smallestindx]=temp;
    }
    
    printf("\nHere's your sorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
}