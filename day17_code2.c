// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main()
{
int n; // Declares an integer variable n
int flag=0; // Declares an integer variable flag and assigns value 0
printf("Enter n:");
scanf("%d",&n); // Takes n as input
if(n<=1) // Checks if n is less than or equal to 1
{
printf("Not prime"); // Prints Not A Prime Number if condition is true
return 0;
}
for(int i=2;i<=(n/2);i++) // Loops from 2 to n/2
{
if(n%i==0) // Checks if n is divisible by current value of i
{
flag=1; // Assigns 1 to flag if condition is true
break;
}
}
if(flag==1) // Checks if flag is equal to 1
{
printf("Not prime"); // Prints Not A Prime Number if condition is true
}
else
{
printf("Prime"); // Prints Prime Number if condition is false
}
return 0;
}



