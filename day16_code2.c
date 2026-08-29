// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
int n,num,rev=0; // Declares three integer variables and initializes rev to 0
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
num=n; // Assigns value of n to num
// Working to reverse the number: 
while(n!=0)
{
int d=n%10;
rev=rev*10+d;
n=n/10;
}
if(rev==num) // Checks whether reversed number is equal to original number
{
printf("Palindrome"); // Prints Palindrome if condition is true
}
else
{
printf("Not A Palindrome"); // Prints Not A Palindrome if condition is false
}
return 0;
}





