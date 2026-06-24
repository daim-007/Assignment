#include <stdio.h>

int total (int x, int y);

int main (){

 int a, b ;

 printf ("enter the number");
 scanf ("%d",&a);
printf ("enter the number");
 scanf ("%d",&b);

 int result = total (a,b);
 printf ("the sum is %d",result);

}

int total (int x, int y){

    return x+y;
}
