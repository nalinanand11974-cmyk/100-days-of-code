// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main()
{
int f=1; // Declares an integer variable f and assigns value 1
int n; // Declares integer variable n to store number
printf("Enter n:\n");
scanf("%d",&n); // Takes number as input
for(int i=n;i>=1;i--) // Loops from n to 1
{
f=f*i; // Multiplies current value of i to f
}
printf("%d",f); // Prints factorial
return 0;
}


