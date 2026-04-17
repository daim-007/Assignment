#include <stdio.h>
    int main(){
        float i;
        float j;
        float sum;
        printf("Write a number: ");
        scanf("%f", &j);
        for(i=1; i<=j; i++){
            sum = sum + 1/i;
        }
        printf("the sum is %f", sum);
        return 0;
    }
