// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include<stdio.h>
int main()
{
int month; // Declares integer variable month to store month number
printf("Enter month number(1-12):\n");
scanf("%d",&month); // Takes month number as input
switch(month) // Checks the value of month
{
case 1: 
printf("January - 31 days"); // Prints January and number of days if month is 1
break;
case 2: 
printf("February - 28 or 29 days"); // Prints February and number of days if month is 2
break;
case 3: 
printf("March - 31 days"); // Prints March and number of days if month is 3
break;
case 4:
printf("April - 30 days"); // Prints April and number of days if month is 4
break;
case 5: 
printf("May - 31 days"); // Prints May and number of days if month is 5
break;
case 6: 
printf("June - 30 days"); // Prints June and number of days if month is 6
break;
case 7: 
printf("July - 31 days"); // Prints July and number of days if month is 7
break;
case 8: 
printf("August - 31 days"); // Prints August and number of days if month is 8
break;
case 9: 
printf("September - 30 days"); // Prints September and number of days if month is 9
break;
case 10:
printf("October - 31 days"); // Prints October and number of days if month is 10
break;
case 11: 
printf("November - 30 days"); // Prints November and number of days if month is 11
break;
case 12: 
printf("December - 31 days"); // Prints December and number of days if month is 12
break;
default:
printf("Invalid Month Number"); // Prints Invalid Month Number if month is not between 1 and 12
break;
}
return 0;
}

