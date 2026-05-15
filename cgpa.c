#include <stdio.h>
int main(){
    int n;
    float cgpa=0, tc=0;
    printf ("Enter the number of subjects\n");
    scanf ("%d",&n);
    int marks [n+1];
    int credits [n+1];
    for (int i=1;i<n+1;i++){
        printf ("enter marks in subject %d\n",i);
        scanf ("%d",&marks[i]);
        if (marks[i]>=90){
            marks[i]=10;
        }
        else if(marks [i]>=80){
            marks[i]=9;
        }
        else if(marks [i]>=70){
            marks[i]=8;
        }
        else if(marks [i]>=60){
            marks[i]=7;
        }
        else if(marks [i]>=50){
            marks[i]=6;
        }
        else {
            marks[i]=0;
        }
    }
    for (int j=1;j<n+1;j++){
        printf ("enter credits in subject %d\n",j);
        scanf ("%d",&credits [j]);
        tc+= credits[j]; 
    }
    for (int a=1;a<n+1;a++){
    cgpa += (marks [a]* credits [a])/tc;
    }
    printf("Your CGPA is: %.3f",cgpa);
    return 0;
}