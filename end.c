#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
printf("the original array is:\n");
for(int i=0;i<5;i++){
    printf ("%d", arr[i]);
}
for( int j=4;j>=0;j--){
    arr[j+1]=arr[j];
}
arr[0]=0;
printf ("new array is :\n");
for (int k=0; k<6; k++){
    printf("%d",arr[k]);
}
return 0;
}