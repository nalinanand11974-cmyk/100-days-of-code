// Q54: Write a program to print the following pattern:

/*
   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include<stdio.h>
int main() 
{
int i,j; // Declares two integer variables to control the loops
// Upper half of diamond
for(i=1;i<=4;i++) // Loops 4 times to print the upper half
{
// Print spaces
for(j=1;j<=4-i;j++) // Runs the loop 4-i times to print spaces
{
printf(" "); // Prints space
}
// Print stars
for(j=1;j<=2*i-1;j++) // Runs the loop 2*i-1 times to print stars
{
printf("*"); // Prints star
}
printf("\n"); // Moves to the next line after each row
}
// Lower half of diamond
for(i=4-1; i>=1;i--) // Loops 3 times to print the lower half
{
// Print spaces
for(j=1;j<=4-i;j++) // Runs the loop 4-i times to print spaces
{
printf(" "); // Prints space
}
// Print stars
for(j=1;j<=2*i-1;j++) // Runs the loop 2*i-1 times to print stars
{
printf("*"); // Prints star
}
printf("\n"); // Moves to the next line after each row
}
return 0;
}


