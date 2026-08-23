// Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include<stdio.h>
int main()
{
int n; // Declares an integer variable n
printf("Enter n:\n");
scanf("%d",&n); // Takes n as input
for(int i=1;i<=n;i++) // Loops from 1 to n
{
printf("%d ",i); // Prints current value of i
}
return 0;
}


