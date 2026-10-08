// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>
int main()
{
char str[100];
int i,s=0,d=0,sp=0;
scanf("%99[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
s++;
}
else if(str[i]>='0'&&str[i]<='9')
{
d++;
}
else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
continue;
}
else
{
sp++;
}
}
printf("Spaces=%d, Digits=%d, Special=%d",s,d,sp);
return 0;
}