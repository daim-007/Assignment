#include <stdio.h>
int main (){
    int arr [10]= {1,2,3,4};
    int n=4;
    int j;
    printf ("the intial array is\n");
    for ( int i=0;i< n;i++){
        printf ("%d",arr[i]);
    }
   printf ("enter your position\n");
    scanf ("%d",&j);
    for (int i=n-1;i>=j;i--){
        arr[i+1]= arr[i];
    }
    arr[j]=0;
    printf ("the changed array is");
    for ( int i=0;i< n+1;i++){
        printf ("%d",arr[i]);}
 return 0; 
}