//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>
int main()
{
char str[100],ch;
int i=0,j,last=0;
printf("Enter name:");
while((ch=getchar())!='\n')
{
str[i]=ch;
i++;
}
str[i]='\0';
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
last=i+1;
}
printf("%c.",str[0]);
for(i=0;i<last-1;i++)
{
if(str[i]==' ')
printf("%c.",str[i+1]);
}
printf(" ");
for(i=last;str[i]!='\0';i++)
printf("%c",str[i]);
return 0;
}