#include <stdio.h>
int main (){
    /* format specifers are special tokens that begin with a % symbol,
    followed by a character that specifies the data type and optional modifiers (width, precision, flags) 
    they control how the data is displayed or interpreted  */
    int age = 15;
    double pi = 3.1415926535;
    float price = 19.99;
    char currency = '$';
    char name [] = "Daim";
    printf (" %d\n", age);
    printf ("%.2f\n", price);
    printf ("%lf\n",pi);
    printf ("%c\n", currency);
    printf ("%s\n",name);
// WIDTH specifes the minimum no of characters to print
int num1 = 1;
int num2 = 10;
int num3 = 15;
int num4 = -100;
printf ("%3d\n", num1);
printf ("%04d\n",num2);// add leading zeroes for preceding the number wiht a zero (rather than having spaces we will have zeroes )
printf ("%-3d\n",num3);// - for left jsutification i.e align form left hand side
printf ("%+5d\n", num4); // by adding + before the data type if the number is positive it is displayed with a + sign on the other hand if it is negaitve it is displayed with a - sign but if + sign is not placed then the code will display the + no with no sign & the negstive no with - sign 
// precision 
float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.5;
printf ("%.1f\n",price1);// output is automatically rounded up
printf ("%+1.2f\n", price2);
printf ("%10.2f\n",price3);// combination of width and precision 

return 0;

}