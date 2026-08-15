//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>
int main()
{
int num1,num2,sum; //Declares three integer variables 
printf("Enter both numbers: ");
scanf("%d %d",&num1,&num2); // Takes second number as input 
sum = num1 + num2; // Adds both the numbers
printf("Sum = %d", sum); // Prints sum of both numbers 
return 0;
}
