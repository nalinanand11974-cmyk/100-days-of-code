#include<stdio.h>
int main()
{
int i,n; // Declares two integer variables 
int s=0; // Declares an integer variable s and assigns value 0 to store the sum
printf("Enter n: \n"); 
scanf("%d",&n); // Takes n as input
for(i=1;i<=n;i++) // Loops from 1 up to n
{
s=s+i; // Adds current value of i to s
}
printf("Sum=%d",s); // Prints sum 
return 0;
}

