// Q53: Write a program to print the following pattern:
/*

*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=9;i++)
{
if(i<=5)
{
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
}
else
{
for(j=1;j<=2*(10-i)-1;j++)
{
printf("*");
}
}
printf("\n");
}
return 0;
}

