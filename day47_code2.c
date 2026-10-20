// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include<stdio.h>
int main()
{
char str[100],word[100];
char ch;
int i=0,j,start=0,max=0,len=0;
printf("Enter sentence:");
while((ch=getchar())!='\n')
{
str[i]=ch;
i++;
}
str[i]='\0';
for(i=0;;i++)
{
if(str[i]!=' '&&str[i]!='\0')
len++;
else
{
if(len>max)
{
max=len;
start=i-len;
}
len=0;
}
if(str[i]=='\0')
break;
}
for(j=0;j<max;j++)
word[j]=str[start+j];
word[j]='\0';
printf("%s",word);
return 0;
}