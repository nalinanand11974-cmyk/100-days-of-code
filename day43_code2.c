// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
char str[100];
int i,count=0,flag=0;
scanf("%s",str);
while(str[count]!='\0')
{
count++;
}
for(i=0;i<count/2;i++)
{
if(str[i]!=str[count-i-1])
{
flag=1;
break;
}
}
if(flag==0)
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
return 0;
}