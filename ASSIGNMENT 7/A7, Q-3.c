#include<stdio.h>
#include<string.h>
int main()
{
    int length, temp;
    char a[20], b[20];
    printf("Enter a word : ");
    scanf("%[^\n]",a);
    printf("You Entered: %s\n",a);
    length = strlen(a);
    
    strcpy(b, a);
    for(int i=0; i<length / 2; i++)
    {
        temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
    }
    printf("After reversing: %s\n",a);
    
    if(strcmp(b, a) == 0)
    printf("The word is palindrome");
    else
    printf("NOT palindrome");
}    