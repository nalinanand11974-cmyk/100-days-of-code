// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main()
{
int n; // Declares an integer variable n
int s = 0; // Declares an integer variable s and assigns value 0 to store sum 
printf("Enter n: \n");
scanf("%d",&n); // Takes n as input
for(int i=1;i<=n;i++) // Loops from 1 to n
{
s=s+(i*2-1); // Adds ith odd number to s
}
printf("%d",s); // Prints sum 
return 0;
}

