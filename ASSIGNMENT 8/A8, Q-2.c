#include<stdio.h>

char my_upper(char ch1) {
    if(ch1 >= 'a' && ch1 <= 'z') {
        ch1 = ch1 - ('a' - 'A');
    }
    else {
        printf("Enter a lowercase alphabet\n");
    }
}

char my_lower(char ch2) {
    if(ch2 >='A' && ch2 <= 'Z') {
        ch2 = ch2 + ('a' - 'A');
    }
    else {
        printf("Enter a uppercase aplhabet\n");
    }
}

int main()
{
    char ch1,ch2;
    printf("Enter a letter ch1: ");
    scanf("%c",&ch1);
    printf("Enter a letter ch2: ");
    scanf(" %c",&ch2);
    printf("Uppercase is : %c\n",my_upper(ch1));
    printf("Lowercase is : %c\n",my_lower(ch2));
}