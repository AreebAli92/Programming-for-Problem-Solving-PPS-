#include<stdio.h>
int main()
{
    int arr[5], n=5;
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
    
    for(int i=1; i<n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev] > curr)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    printf("\nHere's your sorted Array : ");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",arr[i]);
    }
}