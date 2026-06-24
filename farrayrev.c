#include <stdio.h>
void input (int arr[],int n);
void reverse (int arr[],int n);
void output (int arr[],int n);


int main (){
    
    int n;
    printf("Enter the number of element");
    scanf ("%d",&n);
    int arr[n];
    input (arr,n);
    reverse (arr,n);
    output(arr,n);
    
return 0;
}

void input (int arr[],int n){
//    int arr [n];

   for (int i=0;i<n;i++){

    scanf ("%d",&arr[i]);
   }

}
void reverse (int arr[],int n){
//    int arr [n];
   int s;
   

   for (int i=0;i<n/2;i++){
    s= arr[i];
   arr[i]=arr[n-1-i];
   arr[n-1-i]=s;
   }

}

void output (int arr[],int n){

// int arr [n];

   for (int i=0;i<n;i++){

    printf ("%d",arr[i]);
   }


}
