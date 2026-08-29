// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>
int main()
{
int i,n,p=1; // Declares three integer variables, initializes p to 1
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
for(i=1;i<=n;i++) // Loops from 1 to n
{
if(i%2==0) // Checks if current value of i is divisible by 2
{
p=p*i; // Calculates product
}
}
printf("%d",p); // Prints product
return 0;
}


