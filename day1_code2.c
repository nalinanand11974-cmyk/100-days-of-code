// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
int main()
{
int a,b,s,d,p,q; // Declares six integer variables to store both numbers,sum,difference,product and quotient
printf("Enter both numbers: ");
scanf("%d %d",&a,&b); // Takes both numbers as input 
s=a+b; // Sum
d=a-b; // Difference
p=a*b; // Product 
q=a/b; // Quotient
printf("Sum = %d",s); // Prints the sum
printf(",Diff = %d",d); // Prints the difference
printf(",Product = %d",p); // Prints the product 
printf(",Quotient = %d",q); // Prints the quotient 
return 0;
}

