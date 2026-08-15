// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>
int main()
{
int a,b; // Declares two integer variables to store both numbers
printf("Enter a and b: \n");
scanf("%d %d",&a,&b); // Takes both numbers as input 
// Swapping values of a and b
a=a+b;
b=a-b;
a=a-b;
// Printing swapped values
printf("After swap: ");
printf("%d",a);
printf(" %d",b);
return 0;
}



