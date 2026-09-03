// Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include<stdio.h>
int main()
{
int i,j; // Declares two integer variables for controlling the loops
for(i=1;i<=5;i++) // Loops 5 times to print 5 rows
{
for(j=1;j<=5;j++) // Loops 5 times to print 5 stars in each row
{
printf("* "); // Prints a star followed by a space
}
printf("\n"); // Moves the cursor to the next line after each row
}
return 0;
}




