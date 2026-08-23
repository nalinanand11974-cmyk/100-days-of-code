// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three sides: \n");
scanf("%d %d %d",&a,&b,&c); // Takes sides of triangle as input 
if(a==b&&b==c) // Checks if all sides are equal 
{
printf("Equilateral"); // Prints Equilateral if condition is true
}
else if(a==b||b==c||a==c) // Checks if any two sides are equal
{
printf("Isosceles"); // Prints Isosceles if condition is true
}
else
{
printf("Scalene"); // Prints Scalene if all previous conditions are false 
}
return 0;
}

