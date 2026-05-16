#include <stdio.h>
int main(){
    int n;
    float cgpa=0, totalcred =0;
    printf ("Enter the number of subjects\n");
    scanf ("%d",&n);
    int marks;
    int credits;
    int total;
    for (int i=1;i<n+1;i++){
        printf ("enter marks in subject %d\n",i);
        scanf ("%d",&marks);
        printf ("enter credits in subject %d\n",i);
        scanf ("%d",&credits);
        if (marks>=90){
            marks=10;
        }
        else if(marks >=80){
            marks=9;
        }
        else if(marks>=70){
            marks=8;
        }
        else if(marks>=60){
            marks=7;
        }
        else if(marks>=50){
            marks=6;
        }
        else {
            marks = 0;
        }
        total+= marks* credits;
        totalcred += credits;
    }
        cgpa = total/totalcred;
    printf("Your CGPA is: %.3f",cgpa);
    return 0;
}