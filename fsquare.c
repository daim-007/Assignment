#include <stdio.h>

int total (int num);
int main (){
  
    int num , result ;

    printf("Enter your number");
    scanf ("%d",&num);
    result =total (num);

    printf ("The square of your num is %d ",result);
    return 0;


}
int total (int num){

    return num*num;

}