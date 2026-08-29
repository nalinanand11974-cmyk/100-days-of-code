// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main()
{
int a,b; // Declares two integer variables
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b); // Takes two numbers as input
// Working to find HCF of two numbers:
while(b!=0) // Runs while b is not equal to 0
{
int r=a%b;
a=b;
b=r;
}
printf("%d",a); // Prints the HCF
return 0;
}




