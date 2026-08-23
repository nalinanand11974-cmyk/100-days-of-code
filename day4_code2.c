// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<stdio.h>
int main()
{
int i,n; // Declares two integer variables 
int s=0; // Declares an integer variable s and assigns value 0 to store the sum
printf("Enter n: \n"); 
scanf("%d",&n); // Takes n as input
for(i=1;i<=n;i++) // Loops from 1 up to n
{
s=s+i; // Adds current value of i to s
}
printf("Sum=%d",s); // Prints sum 
return 0;
}

