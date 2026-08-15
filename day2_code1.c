// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main()
{
int length,width,area,perimeter; // Declares four int variables to store length,width,area and perimeter of rectangle 
printf("Enter length and width of rectangle: \n");
scanf("%d %d",&length,&width); // Takes length and width of rectangle as input
area = length*width; // Calculates area 
perimeter = 2*(length+width); // Calculates perimeter
printf("Area = %d",area); // Prints area of the rectangle 
printf(", Perimeter = %d",perimeter); // Prints perimeter of the rectangle 
return 0;
}