// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include<stdio.h>
int main()
{
char date[20];
int month;
printf("Enter date:");
scanf("%s",date);
month=(date[3]-'0')*10+(date[4]-'0');
printf("%c%c-",date[0],date[1]);
switch(month)
{
case 1:printf("Jan");
break;
case 2:printf("Feb");
break;
case 3:printf("Mar");
break;
case 4:printf("Apr");
break;
case 5:printf("May");
break;
case 6:printf("Jun");
break;
case 7:printf("Jul");
break;
case 8:printf("Aug");
break;
case 9:printf("Sep");
break;
case 10:printf("Oct");
break;
case 11:printf("Nov");
break;
case 12:printf("Dec");
break;
}
printf("-%c%c%c%c",date[6],date[7],date[8],date[9]);
return 0;
}