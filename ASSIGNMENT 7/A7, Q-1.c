#include<stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    printf("Enter number of columns : ");
    scanf("%d",&cols);
    
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    
    printf("\nEnter 1st matrix's Elements : \n\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nThe 1st Matrix is : \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nEnter 2nd Matrix's Elements : \n\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\nThe 2nd Matrix is : \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("\n\nAddition of them is : \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}