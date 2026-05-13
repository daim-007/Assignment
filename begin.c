#include <stdio.h>
int main(){
    int arr [5]={1,2,3,4};
    printf ("Original Array is:\n");
    for (int i=0;i<4;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    arr [5]= 0;
    printf ("the new array is:\n");
    for (int j=0;j<5;j++){
        printf ("%d",arr[j]);
    }
    return 0;
}