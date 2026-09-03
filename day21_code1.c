// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>
#include<math.h> // Required for pow()
int main()
{
int n,last,first,og,c=0; // Declares five integer variables, intializes c to 0
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
og=n; // Assigns value of n to og
last=n%10; // Stores last digit of the number
// Working to count number of digits in the number:
while(n!=0) // Runs while n is not equal to 0
{
c++;
n=n/10; // Updates value of n by dividing it by 10 each time the loop runs
}
int m = pow(10,c-1); 
first = og/m; // Stores the first digit of the number
// Working to swap first and last digits of the number: 
int swapped = og;
swapped = swapped-(first*m)+(last*m);
swapped = swapped-last+first;
printf("%d",swapped); // Prints the number with swapped first and last digits
return 0;
}


