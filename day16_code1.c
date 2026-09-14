// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>
int main()
{
int n,c=0,i;
int binary[100];
scanf("%d",&n);
while(n>0)
{
binary[c]=n%2;
n=n/2;
c++;
}
for(i=c-1;i>=0;i--)
{
printf("%d",binary[i]);
}
return 0;
}

