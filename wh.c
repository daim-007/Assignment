#include <stdio.h>
int main(){
    int n,i=0,sum=0;
    printf ("enter your number:\n");
    scanf ("%d",&n);
    while ( i!=n+1){
        sum = sum + i;
        i++;

    }
    printf ("the sum is :%d",sum );
    return 0;
}