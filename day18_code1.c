// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include<stdio.h>
int main()
{
int n; // Declares an integer variable n
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
printf("Factors: ");
for(int i=1;i<=n;i++) // Loops from 1 to n
{
if(n%i==0) // Checks if n is divisble by i
{
printf("%d ",i); // Prints current value of i if condition is true
}
}
return 0;
}



