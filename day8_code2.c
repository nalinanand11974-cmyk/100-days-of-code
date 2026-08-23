// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>
int main()
{
int a, b, c, largest; // Declares four integer variables
printf("Enter three numbers: \n");
scanf("%d %d %d", &a, &b, &c); // Takes the three numbers as input
largest = a; // Assigns largest with the value of a
if (b > largest) // Checks if b is greater than largest
{
largest = b; // Assigns largest the value of b if condition is true
}
if (c > largest) // Checks if c is greater than largest
{
largest = c; // Assigns largest the value of c if condition is true
}
printf("Largest is %d", largest); // Prints the largest number
return 0;
}

