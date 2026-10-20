// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>
int main()
{
char str[100],ch;
int i=0;
printf("Enter name:");
while((ch=getchar())!='\n')
{
str[i]=ch;
i++;
}
str[i]='\0';
printf("%c.",str[0]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
printf("%c.",str[i+1]);
}
return 0;
}