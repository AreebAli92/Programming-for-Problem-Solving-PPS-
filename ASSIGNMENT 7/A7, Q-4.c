#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,found=0;
    char text[50], pattern[50];
    printf("Enter the main string: ");
    scanf("%[^\n]",text);
    printf("Enter the pattern to search: ");
    scanf(" %[^\n]",pattern);
    
    int textlen = strlen(text);
    int pattlen = strlen(pattern);
    
    for(i=0; i<=textlen - pattlen; i++){
        for(j=0; j<pattlen; j++){
            if(text[i+j] != pattern[j]){
                break;
            }
        }
        if(j == pattlen){
            printf("pattern found at index %d\n",i);
            found=1;
        }
    }
    if(!found){
        printf("patern not found in the text!!");
    }
}