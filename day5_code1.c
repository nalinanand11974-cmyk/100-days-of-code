// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h> // Required for pow()
int main()
{
float p,r,t,CI,A; // Declares five float variables
int SI; // Declares integer variable to store simple interest
printf("Enter Principal, Rate and Time respectively: \n");
scanf("%f",&p); // Takes principal as input
scanf(" %f",&r); // Takes rate as input
scanf(" %f",&t); // Takes time as input
SI = (p*r*t)/100; // Calculates simple interest
A=p*pow((1+r/100),t); // Calculates amount
CI = A-p; // Calculates compound interest
printf("Simple Interest = %d",SI); // Prints simple interest upto decimal places
printf(", Compound Interest = %.2f",CI); // Prints compound interest upto two decimal places
return 0;
}

