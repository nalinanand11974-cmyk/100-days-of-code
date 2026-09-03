// Q48: Write a program to print the following pattern:
/*
1
12
123
1234
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include<stdio.h>
int main()
{
int i,j; // Declares two integer variables for controlling the loops
for(i=1;i<=5;i++) // Loops 5 times to print 5 rows
{
for(j=1;j<=i;j++) // Runs the loop i times for each row
{
printf("%d ",j); // Prints current value of j followed by a space
}
printf("\n"); // Moves to the next line after each row
}
return 0;
}

