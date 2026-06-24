#include <stdio.h>
int main(){
    int n,k,reverse=0;
    printf ("enter your number\n");
    scanf ("%d",&n);
    k=n;
    while (n!=0){
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    printf ("reverse of the number is: %d\n",reverse);
    if (k== reverse ){
        printf("number is a pallandrome \n");
    }
    else {
        printf ("number is not a pallandrome");
    }
    return 0;
}
