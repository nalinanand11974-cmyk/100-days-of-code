// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>
int main()
{
int n; // Declares an integer variable n
int s=0; // Declares an integer variable s and assigns value 0
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
// Working to calculate sum of digits
while(n!=0) // Runs while n is not equal to 0
{
s=s+n%10;
n=n/10; 
}
printf("%d",s); // Prints sum of digits
return 0;
}


