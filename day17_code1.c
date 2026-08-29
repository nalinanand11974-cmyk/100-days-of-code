// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h> // Required for pow()
int main()
{
int n; // Declares an integer variable n
int s=0; // Declares an integer variable s and assigns value 0
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
int num=n; // Declares an integer variable num and assigns n to it
int n1=n; // Declares integer variable n1 and assigns n to it
int digits=0; // Declares integer variable digits and assigns value 0
// Counting digits in the number:
while(n!=0)
{
digits++;
n=n/10;
}
// Calculating the sum of each digit raised to the power of total digits:
while(n1!=0)
{
int d=n1%10;
s=s+pow(d,digits);
n1=n1/10;
}
if(s==num) // Checking whether the calculated sum is equal to the original number
{
printf("Armstrong"); // Prints Armstrong if condition is true
}
else
{
printf("Not Armstrong"); // Prints Not Armstrong if condition is false
}
return 0;
}

