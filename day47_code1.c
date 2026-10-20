// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i,j,found;
printf("Enter first string:");
scanf("%s",str1);
printf("Enter second string:");
scanf("%s",str2);
for(i=0;str1[i]!='\0';i++)
{
found=0;
for(j=0;str2[j]!='\0';j++)
{
if(str1[i]==str2[j])
{
str2[j]='*';
found=1;
break;
}
}
if(found==0)
{
printf("Not anagrams");
return 0;
}
}
for(j=0;str2[j]!='\0';j++)
{
if(str2[j]!='*')
{
printf("Not anagrams");
return 0;
}
}
printf("Anagrams");
return 0;
}