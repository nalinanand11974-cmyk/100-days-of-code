//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>
int main()
{
int n,i,sum=0; // Declares three integer variables, initializes sum to 0
printf("Enter a number: \n");
scanf("%d",&n); // Takes n as input
for(i=1;i<n;i++) // Loops from 1 to n-1
{
if(n%i==0) // Checks if n is divisible by current value of i
{
sum=sum+i; // Adds current value of i to sum
}
}
if(sum==n) // Checks if sum of factors of the number is equal to the number
{
printf("Perfect Number"); // Prints perfect number if condition is true
}
else
{
printf("Not a Perfect Number"); // Prints not a perfect number if condition is false
}
return 0;
}



