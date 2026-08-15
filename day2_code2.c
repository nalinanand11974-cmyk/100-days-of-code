// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
#include<math.h> // Required for M_PI
int main()
{
float radius,area,circumference; // Declares three float variables to store radius,area and circumference of the circle
printf("Enter radius of circle: ");
scanf("%f",&radius); // Takes radius as input
area = M_PI*radius*radius; // Calculates area of the circle
circumference = 2*M_PI*radius; // Calculates circumference of the circle
printf("Area = %.2f",area); // Prints the area of the circle upto two decimal places
printf(", Circumference = %.2f",circumference); // Prints the circumference of the circle upto two decimal places
return 0;
}



