#include<stdio.h>

int leap(int x) {
   if(x % 4 == 0 && (x % 100 != 0 || x % 400 == 0)) {
       return 1;
   } 
   else {
       return 0;
   }
}

int main()
{
    int n;
    printf("Enter year : ");
    scanf("%d",&n);
    printf("%d\n",leap(n));
}