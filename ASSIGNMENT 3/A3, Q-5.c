#include<stdio.h>
int main()
{
    int rank;
    printf("Enter student's Rank : ");
    scanf("%d",&rank);
    if(rank<=10 && rank>=1)
    {
        printf("Student's Grade is : A\n");
    }
    else if(rank<=20 && rank>=11)
    {
        printf("Student's Grade is : B\n");
    }
    else if(rank<=40 && rank>=21)
    {
        printf("Student's Grade is : C\n");
    }
    else if(rank<=60 && rank>=41)
    {
        printf("Student's Grade is : D\n");
    }
    else if(rank<=100 && rank>=61)
    {
        printf("Student's Grade is : E\n");
    }
    else
    {
        printf("Student's Grade is : F\n");
    }
}




or





#include<stdio.h>
int main()
{
    int rank;
    printf("Enter student's Rank : ");
    scanf("%d",&rank);
    if(rank<=0)
    {
        printf("Invalid rank! Rank must be positive number.\n");
    }
    else if(rank<=10)
    {
        printf("Student's Grade is : A\n");
    }
    else if(rank<=20)
    {
        printf("Student's Grade is : B\n");
    }
    else if(rank<=40)
    {
        printf("Student's Grade is : C\n");
    }
    else if(rank<=60)
    {
        printf("Student's Grade is : D\n");
    }
    else if(rank<=100)
    {
        printf("Student's Grade is : E\n");
    }
    else
    {
        printf("Student's Grade is : F\n");
    }
}