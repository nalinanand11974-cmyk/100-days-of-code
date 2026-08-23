/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main()
{
int days,fine=0; // Declares two integer variables 
printf("Enter number of late days: \n");
scanf("%d",&days); // Takes number of late days as input
if(days<=5) // Checks if late days are less then equal to 5
{
fine = days*2; // Calculates fine
printf("Fine = Rs. %d",fine); // Prints fine
}
else if(days<=10) // Checks if late days are less than equal to 10
{
fine = 10 + (days-5)*4; // Calculates fine
printf("Fine = Rs. %d",fine); // Prints fine
}
else if (days<=30) // Checks if late days are less than equal to 30
{
fine = 30+(days-10)*6; // Calculates fine
printf("Fine = Rs. %d",fine); // Prints fine
}
else
{
printf("Membership Cancelled"); // Prints Membership Cancelled if late days are more than 30
}
return 0;
}


