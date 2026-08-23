// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include<stdio.h>
int main()
{
char ch; //  Declares a char variable ch
printf("Enter a character:\n");
scanf("%c",&ch); // Takes character as input
if(ch>='A'&&ch<='Z') // Checks if character is uppercase
{
printf("Uppercase alphabet"); // Prints Upper Case if condition is true
}
else if(ch>='a'&&ch<='z') // Checks if character is lowercase
{
printf("Lowercase alphabet"); // Prints Lower Case if condition is true
}

else if(ch>='0'&&ch<='9') // Checks if character is a digit 
{
printf("Digit"); // Prints Digit if condition is true 
}
else
{
printf("Special character"); // Prints Special Character if all previous conditions are false
}
return 0;
}


