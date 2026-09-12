// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include<stdio.h>
int main()
{
int i,n,arr[n];
int c1=0,c2=0;
printf("Enter array size and elements:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
c1++;
}
else
{
c2++;
}
}
printf("Even=%d",c1);
printf(", Odd=%d",c2);
return 0;
}

