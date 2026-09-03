// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main()
{
int fact; // Declares an integer variable
int s=0; // Declares an integer variable s and assigns value 0
int n,num,d; // Declares three integer variables
printf("Enter n:\n"); 
scanf("%d",&n); // Takes n as input
num=n; // Assigns value of n to num
// Working to calculate the sum of factors of digits of a number: 
while(n!=0) // Runs while n is not equal to 0
{
d=n%10; // Stores the last digit of the number
fact=1; // Assigns value 1 to fact
for(int i=d;i>=1;i--) // Loops from d to 1
{
fact=fact*i; // Multiples current value of i to fact
}
s=s+fact; // Calculates sum
n=n/10; // Updates value of n by dividing it by 10 each time the loop runs
}
if(s==num) // Checks if sum of factors of digits of the number is equal to the number
{
printf("Strong Number"); // Prints strong number if condition is true
}
else
{
printf("Not Strong Number"); // Prints not a strong number if condition is false
}
return 0;
}


