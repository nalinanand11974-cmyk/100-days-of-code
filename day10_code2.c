// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include<stdio.h>
int main()
{
int day; // Declares an integer variable day to store day number
printf("Enter day number(1-7): \n");
scanf("%d",&day); // Takes day number as input
switch(day) // Checks the value of day
{
case 1:  
printf("Monday"); // Prints Monday if day is 1
break;
case 2:
printf("Tuesday"); // Prints Tuesday if day is 2
break;
case 3: 
printf("Wednesday"); // Prints Wednesday if day is 3
break;
case 4: 
printf("Thursday"); // Prints Thursday if day is 4
break; 
case 5: 
printf("Friday"); // Prints Friday if day is 5
break;
case 6:
printf("Saturday"); // Prints Saturday if day is 6
break;
case 7: 
printf("Sunday"); // Prints Sunday if day is 7
break;
default:
printf("Invalid day number"); // Prints Invalid day number if input is invalid
}
return 0;
}




