// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<stdio.h>
int main()
{
int a; // Declares an integer variable a to store the number 
printf("Enter a number: \n");
scanf("%d",&a); // Takes number as input
// Checking whether number is even or odd
if(a%2==0) // Condition to check if number is divisible by 2
{
printf("%d",a);
printf(" is even"); // Prints that number is even if condition is true
}
else 
{
printf("%d",a);
printf(" is odd"); // Prints that number is odd if condition is false
}
return 0;
}

