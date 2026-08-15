// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>
int main()
{
int t,h,m,s; // Declares four integer variables 
printf("Enter time in seconds: \n");
scanf("%d",&t); // Takes time in seconds as input 
// Conversion of time to hours : minutes : seconds format
h=t/3600; 
m=(t%3600)/60; 
s=t%60;
printf("Time in hours:minutes:seconds format = \n");
// Printing the time in hours : minutes : seconds format 
printf("%d",h);
printf(":%d",m);
printf(":%d",s);
return 0;
}


