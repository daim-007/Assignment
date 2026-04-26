
#include<stdio.h>
int main(){
    int i,n;
    int sum =0;
    printf("Enter your num:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){

        sum +=i;
     
    }
   printf("the sum is %d ", sum);
return 0;

    
}