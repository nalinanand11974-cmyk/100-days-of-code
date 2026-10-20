#include<stdio.h>
int main()
{
char str[100];
int i=0;
char ch;
printf("Enter a string:");
while((ch=getchar())!='\n')
{
str[i]=ch;
i++;
}
str[i]='\0';
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
str[i]='-';
}
printf("%s",str);
return 0;
}