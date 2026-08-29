// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>
int main()
{
int a,b,hcf,lcm; // Declares four integer variables
int a1,b1; // Declares two integer variables 
printf("Enter two numbers:");
scanf("%d %d",&a,&b); // Takes two numbers as input
a1=a; // Assings value of a to a1
b1=b; // Assigns value of b to b1
// Working to calculate HCF of the two numbers: 
while(b!=0) // Runs while b is not equal to 0
{
int temp=a%b;
a=b;
b=temp;
}
hcf=a; // HCF
lcm=(a1*b1)/hcf; // Calculates LCM
printf("%d",lcm); // Prints LCM
return 0;
}



