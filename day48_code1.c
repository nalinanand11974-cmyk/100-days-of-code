// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i,j,k,flag;
printf("Enter first string:");
scanf("%s",str1);
printf("Enter second string:");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++)
{
flag=1;
for(j=0;str1[j]!='\0';j++)
{
k=i+j;
if(str1[k]=='\0')
k=k-i;
if(str1[k]!=str2[j])
{
flag=0;
break;
}
}
if(flag==1&&str2[j]=='\0')
{
printf("Rotation");
return 0;
}
}
printf("Not rotation");
return 0;
}
