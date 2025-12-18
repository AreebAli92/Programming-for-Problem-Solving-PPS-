#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size you want in the Array : ");
    scanf("%d",&size);
    int a[size];
    
    printf("Enter the Elements of the Array : \n");
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("The Elements you have Entered are : ");
    
    for(int i=0; i<size; i++)
    {
        printf("%d, ",a[i]);
    }
    
    int index;
    printf("\nplease Enter the index you want to modify : ");
    scanf("%d",&index);
    
    if(index < 0 || index >= size)
    {
        printf("Invalid index! please Enter an index between 0 and %d",size-1);
    }
    
    int newvalue;
    printf("Enter the new value : ");
    scanf("%d",&newvalue);
    a[index]=newvalue;
    
    printf("Array updated successfully. \n");
    
    printf("Updated Array contents are : ");
    for(int i=0; i<size; i++)
    {
        printf("%d, ",a[i]);
    }
}