// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter a and b: \n");
scanf("%d %d",&a,&b); // Takes both numbers as input
// Swapping values of a and b
temp = a;
a=b;
b=temp;
// Printing swapped values
printf("After swap: "); 
printf("%d", a);
printf(" %d", b);
return 0;
}