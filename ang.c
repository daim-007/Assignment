#include <stdio.h>
#include <math.h>
int main(){
    int n,a=0,b,remainder,digits=0;
    double k=0;
printf ("enter your number:\n");
scanf ("%d",&n);
a=b=n;
while (n!=0){
    n=n/10;
    digits++;}

while (a!=0){
    remainder = a%10;
    k+= pow (remainder,digits);// pow returns double 
    a=a/10;
}
if (k==b){
    printf ("%d is an angstrome number\n",b);
}
else {
    printf ("%d is not an angstrome number ",b);
}
return 0;
}