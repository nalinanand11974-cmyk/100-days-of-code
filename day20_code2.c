// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>
int main() 
{
long long binary,digit; // Declares two long long variables
long long result=0; // Declares a long long variable result assigns value 0
long long place=1; // Declares a long long variable place and assigns value 1
printf("Enter a binary number: ");
scanf("%lld",&binary); // Takes binary number as input
// Working to convert binary number to its 1's complement:
while(binary!=0) // Runs while binary is not equal to 0
{
digit=binary%10;
if(digit==0) 
{
result=result+1*place;
}
else
{
result=result+0*place; 
}
place=place*10;
binary=binary/10; // Updates the value of binary by dividing it by 10 each time the loop runs
}
printf("1's Complement=%lld",result); // Prints the 1's complement of the binary number
return 0;
}


