// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h> // Required for sqrt()
int main() 
{
float a,b,c,d; // Declares four float variables 
float root1,root2; // Declares two float variables 
printf("Enter a, b and c: \n");
scanf("%f %f %f",&a,&b,&c); // Inputs a, b and c
d=b*b-4*a*c; // Calculating the discriminant 
if(d>0) // Checks if discriminant is greater than 0
{
root1 = (-b+sqrt(d))/(2*a); // Calculates first root
root2 = (-b-sqrt(d))/(2*a); // Calculates second root
printf("Roots are real and different: "); 
printf("%.2f %.2f ",root1,root2); // Prints the real and different roots
}
else if(d==0) // Checks if discriminant is equal to 0
{
root1 = -b/(2*a); // Calculates roots
printf("Roots are real and same: ");
printf("%.2f ",root1); // Prints the equal and real roots
}
else 
{
printf("Roots are complex"); // Prints Roots are complex if discriminant is less than 0
}
return 0;
}




