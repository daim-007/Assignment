#include <stdio.h>
int main(){
    int n,sum=0;
    printf ("enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for (int a=0; a<n; a++){
        printf("enter the %d element of the array :\n", a);
        scanf ("%d",&arr[a]);
    }
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf ("the sum is %d",sum);
    return 0;
}