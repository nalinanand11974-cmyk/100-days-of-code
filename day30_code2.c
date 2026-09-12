// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main()
{
int n;
int c1=0,c2=0,c3=0;
printf("Enter array size and elements:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
if(arr[i]>0)
{
c1++;
}
else if(arr[i]<0)
{
c2++;
}
else
{
c3++;
}
}
printf("Positive=%d",c1);
printf(", Negative=%d",c2);
printf(", Zero=%d",c3);
return 0;
}


