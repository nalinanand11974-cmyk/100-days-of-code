// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main()
{
int a,b; // Declares two integer variables to store the numbers
char ch; // Declares a character variable ch to store the operator
printf("Enter both numbers and operator(+,-,*,/,%):\n");
scanf("%d %d %c",&a,&b,&ch); // Takes both numbers and operator as input
switch(ch) // Checks value of ch
{
case '+': 
printf("Sum=%d",a+b); // Prints Sum if ch is +
break;
case '-':
printf("Difference=%d",a-b); // Prints difference if ch is -
break;
case '*':
printf("Product=%d",a*b); // Prints Product if ch is *
break;
case '/':
printf("Quotient=%d",a/b); // Prints Quotient if ch is /
break;
case '%': 
printf("Remainder=%d",a%b); // Prints Remainder if ch is %
break;
default:
printf("Invalid Choice"); // Prints Invalid Choice ch is invalid
}
return 0;
}




