#include <stdio.h>
int main(){
    int arr[4]={1,6,9,4};
    int temp;
    for (int j=0;j<4;j++){
    for (int i=0; i<4;i++){
        if (arr[j]<arr[i]){
            temp = arr [i];
            arr [i]= arr[j];
            arr [j]= temp;
        }
    }
    }
    printf ("the new array is:\n");
    for (int a=0;a<4;a++){
        printf("%d",arr[a]);
    }
    return 0;
}