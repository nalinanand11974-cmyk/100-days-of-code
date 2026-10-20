// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

 #include<stdio.h>
int main()
{
char str[100],ch,temp;
int i=0,j,start;
printf("Enter sentence:");
while((ch=getchar())!='\n')
{
str[i]=ch;
i++;
}
str[i]='\0';
start=0;
for(i=0;;i++)
{
if(str[i]==' '||str[i]=='\0')
{
j=i-1;
while(start<j)
{
temp=str[start];
str[start]=str[j];
str[j]=temp;
start++;
j--;
}
start=i+1;
}
if(str[i]=='\0')
break;
}
printf("%s",str);
return 0;
}