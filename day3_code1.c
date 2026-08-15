// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main()
{
int celsius,fahrenheit; // Declares two int variables to store temperatures in celsius and fahrenheit 
printf("Enter temperature in Celsius: \n"); 
scanf("%d",&celsius); // Takes temperature in celsius as input 
fahrenheit = (celsius*9/5) + 32; // Calculates the temperature in fahrenheit 
printf("Fahrenheit = %d",fahrenheit); // Prints converted temperature 
return 0;
}

