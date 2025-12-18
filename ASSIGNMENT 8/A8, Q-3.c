#include<stdio.h>

int my_pow(int base, int expo) {
    if(expo == 0) 
    return 1;
    
    int result = 1;
    for(int i=0; i<expo; i++) {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, expo,result;
    printf("Enter base (integer) : ");
    scanf("%d",&base);
    printf("Enter exponent (non-negative) : ");
    scanf("%d",&expo);
    
    if (expo < 0) {
        printf("Exponent must be non-negative!\n");
        return 1;
    }    
    if(base == 0) {
        printf("%d^%d = %d\n",base,expo,0);
    }
    else if(base == 1) {
        printf("%d^%d = %d\n",base,expo,1);
    }
    else {
        result = my_pow(base,expo);
        printf("%d^%d = %d\n",base,expo,result);
    }
}