#include<stdio.h>
int main(){
    int i=1;
    int n;
    int sum =0;
    printf("Enter your num:");
    scanf("%d",&n);

    do {
      sum += i; 
      i++; 
    } while (i<=n);

    printf("the sum is %d", sum);
return 0;

    
}