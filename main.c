#include <stdio.h>

int main() {

    int age = 25;

    int year =  2026;

    int km = 6;

    float  gpa = 2.5;
    float price = 99.99;
    double pi = 3.14124886794;
    char grade = 'B';
    char currency = '$';

    printf("The US currency is %c\n", currency);
    printf("Your grade is %c\n", grade);
    printf("The value of pi is %.15lf\n", pi);
    printf("The price is $%.2f\n", price);
    printf("Your were gpa is %f\n", gpa);

    printf("You are %d years old \n", age);
    printf("We are on 21`st century on %d year\n", year);
    
    printf("I walk almost %d Km per day", km);





    return 0;
}