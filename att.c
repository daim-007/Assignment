#include <stdio.h>
#include <math.h>
int main(){
    int n,m;
    float a=0,b=0,c=0,r=0;
    printf ("Enter the number of classes held\n");
    scanf("%d",&n);
    printf("Enter the number of classes attended\n");
    scanf ("%d",&m);
    if (m>n){
        printf ("Not possible");
    }
    else {
    a=(float)m/n*100;//curent %
    printf ("Your current attendance percentage is %.2f\n",a);
    printf("Enter your required attendance percentage\n ");
    scanf ("%f",&r);
    if (r>=100 ){
        printf ("Not possible");
    }
    else if (r<a){
    b=-(r*n-100*m)/(100-r);
    printf ("You can afford to leave %.1f classes",ceil (b));
    }
    else {
       c=(r*n-100*m)/(100-r);
    printf ("You have to attend %.1f classes",ceil (c));
    }
}
    return 0;
}