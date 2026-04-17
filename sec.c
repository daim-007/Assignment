#include<stdio.h>
#include <stdbool.h>// necessary when wprking with bool
int main(){
    // varaible is a reusable container for a value 
    //it behaves as if it were the value it contains
    /* int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double= souble-precision decimal number (8bytes)
    char = single cahracter (1 byte)
    char []= arary of characters {aka string in other programming languages} (1 byte)
    bool = true or false (1 byte, requires <stdbool,h>)*/
    int age = 25.5;
    int year = 2025;
    int quantity = 1;
    float cgpa = 2.5;
    float price = 19.99;
    float temp = -37.5;
    double pi = 3.141592653585979;// for more precision we use double since it store more than 6 digits after the decimal pi=oint unlike the  float fnc
    double e = 2.7182818284590;
    char grade = 'A';
    char symbol= '=';
    char name[] = "bro code";
    char email[] = "fake123@gmail.com";
    bool isOnline = true ; // true corresponds to 1 while false corresponds to 0 
    printf("you are %d years old\n", age);
    printf ("the year is %d\n", year );
    printf ("you have ordered %dx items\n ", quantity); 
    printf ("your gpa is %f\n", cgpa);// c language has a defautlt behavoiur of dispalying 6 digits after the decimal point unless speecified
    printf (" the price is %.1f\n",price);
    printf ("the temperatre is %f\n",temp);
    printf ("the value of pi is %.15lf\n", pi);//we have to specify how many numbers after the decimal pointn we want unless c will only display 6 digits after the decimal point 
 printf(" eulers number is %.15lf\n",e); 
 printf ("your grade is %c\n",grade );
 printf ("your fav symbol is %c\n", symbol);
 printf (" hello %s\n",name);
 printf ("your email is %s\n",email);
 printf ("%d\n" ,isOnline);// booleans are not really used like this that is diplayed using a print fnc but rather they arae used internally example in the next line
 if (isOnline){
    printf ("you are online");
 }
 else {
    printf ("you are offline");
 }
    return 0;
}