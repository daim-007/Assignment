#include<stdio.h>

int sum (int x, int y){

return x+y;

}
int main (){
    int i;
    int arr[4];

     arr [0]= sum(4,5);
     arr [1]= sum(4,9);
     arr [2]= sum(9,5);
     arr [3]= sum(4,0);
    

    for (i=0;i<4;i++){
        printf("The result is %d\n",arr[i]);
    }



return 0;

}