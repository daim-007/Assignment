#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number no : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the largest no",a);
    }
    else {printf("%d is the largest no.",b);

    }
    return 0;
}