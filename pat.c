#include <stdio.h>
int main(){
    int n ;
    printf ("enter the number of rows:\n");
    scanf ("%d",&n);
    for (int i =0; i<(n+1)/2 ;i++){
        for (int j=0 ; j<=i; j++){
            printf ("*");
        }
        printf ("\n");
   }
  for (int i= (n+1)/2; i>0; i--){
        for (int a=0; a<i; a++){
            printf ("*");

        }
        printf ("\n");
    } 
    return 0;
}