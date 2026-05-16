#include <stdio.h>
#include <math.h>
int main(){
   int n;
    float cgpa=0, totalcred =0;
    printf ("Enter the number of subjects\n");
    scanf ("%d",&n);
    float  marks=0;
    int credits=0;
    int total=0;
    for (int i=1;i<n+1;i++){
        printf ("enter marks in subject %d\n",i);
        scanf ("%f",&marks);
        printf ("enter credits in subject %d\n",i);
        scanf ("%d",&credits);
        marks= ceil( marks/10);
        total+= marks* credits;
        totalcred += credits;
    }
        cgpa = total/totalcred;
    printf("Your CGPA is: %.3f",cgpa);
    return 0;
}