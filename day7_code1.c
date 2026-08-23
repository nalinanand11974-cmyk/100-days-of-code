// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include<stdio.h>
int main()
{
int y; // Declares an integer variable y to store the year
printf("Enter year:");
scanf("%d",&y); // Takes year as input
if(y%400==0) // Checks if y is divisible by 400
{
printf("Leap Year"); // Prints leap year if true
}
else if(y%4==0&&y%100!=0) // Checks if y is divisible by 4 and not divisible by 100
{
printf("Leap Year"); // Prints leap year if true
}
else
{
printf("Not a Leap Year"); // Prints not a leap year if all previous conditions are false
}
return 0;
}


