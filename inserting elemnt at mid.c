#include <stdio.h>

int main(){
    int n =5;
    int arr[5]={1,2,3,4,5};
    int i;
    int a;
    printf("enter index");
    scanf("%d", &a);
    for (i= n;i>=a;i--)
    {
        arr[i]=arr [i-1];
    }
   
    arr[a-1]=0;
    n++;
    for (i=0;i<n;i++)
   { printf ("%d",arr[i]);}
return 0;

}