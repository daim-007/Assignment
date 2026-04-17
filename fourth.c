#include <stdio.h>
int main(){
   float x = 19;
   int y = 10 ;
   float a,b,c,d,e,f,g,h ;
   a=x+y;
   b=x-y;
   c= x*y;
   d= x/y;// bczz of int the value is trunkated 
   printf ("the number is %f",d) ; // if we are dividing by an integer we cant retain the decimal portion
   return 0;
}