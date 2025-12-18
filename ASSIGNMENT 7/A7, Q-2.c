#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;
    
    printf("Enter number of rows of 1st Matrix : ");
    scanf("%d",&r1);
    printf("Enter number of columns of 1st Matrix : ");
    scanf("%d",&c1);
    
    printf("\nEnter number of rows of 2nd Matrix : ");
    scanf("%d",&r2);
    printf("Enter number of columns of 2nd Matrix : ");
    scanf("%d",&c2);
    
    int matrix1[100][100], matrix2[100][100], product[100][100];
    
    printf("\nEnter 1st matrix's Elements : \n\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("\nThe 1st Matrix is : \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nEnter 2nd Matrix's Elements : \n\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("Enter Element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    printf("\nThe 2nd Matrix is : \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    
    if(c1==r2){
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                product[i][j]=0;
            }
        }
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<c1; k++){
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
        }
    }
    printf("\n\nMatrix Multiplication is : \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("\nMatrix Multiplication is not possible (row2 != column1) ");
}
}