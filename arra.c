#include <stdio.h>
int main(){
    int arr[7] ={0,1,2,3};
    int n;
    printf("original array is: \n");
    for (int i=0;i<4;i++){
        printf ("%d",arr[i]);
    } 
    printf ("\n");
    printf("enter the position of insertion:\n");
    scanf ("%d",&n);
    if (n>=4){
        printf ("not possible");
    } else {
    for (int i=3;i>=n;i--){
        arr[i+1]= arr [i];}
        arr [n]= 9;
    }
    printf ("the new array is:\n");
    for (int k=0;k<5;k++){
        printf ("%d", arr[k]);
    }

    return 0; 
}