#include<stdio.h>

unsigned long long factorial(int num) {
    unsigned long long f = 1;
    for(int i=1; i<=num; i++) {
        f=f*i;
    }
    return f;
}

int main()
{
    int num;
    printf("To Calculate Factorial of a number.\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num < 0) {
        printf("The Factorial is not defined for negative number.\n");
    }
    else {
        printf("Factorial of %d is = %llu\n",num,factorial(num));
    }
    
    int n,r;
    printf("\nTo find Permutation and Combination.\n");
    printf("Enter total no. of items (n): ");
    scanf("%d",&n);
    printf("Enter items you want to pick or arrange (r): ");
    scanf("%d",&r);
    
    if(n < 0 || r < 0) {
        printf("n and r must be non-negative !\n");
        return 1;
    }
    
    if(r > n) {
        printf("r cannot be greater than n.\n");
        return 1;
    }
    
    unsigned long long fn = factorial(n);
    unsigned long long fr = factorial(r);
    unsigned long long fnr = factorial(n-r);
    
    printf("Factorial of (n) %d is = %llu\n",n,fn);
    printf("Factorial of (r) %d is = %llu\n",r,fr);
    printf("Factorial of (n-r) (%d-%d) is = %llu\n",n,r,fnr);
    
    unsigned long long p = fn / fnr;
    unsigned long long c = fn / (fr * fnr);
    
    printf("Permutation (P) = %llu\n", p);
    printf("Combination (C) = %llu\n", c);
}