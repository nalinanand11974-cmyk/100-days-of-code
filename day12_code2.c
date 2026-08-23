/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main()
{
int units; // Declares integer variable to store units consumed
float bills; // Declares float variable to store bill amount
printf("Enter units consumed:\n"); 
scanf("%d",&units); // Takes units consumed as input
if(units<=100) // Checks if units consumed are less than or equal to 100
{
bills = units*5; // Calculates Bill
}
else if(units<=200) // Checks if units consumed are less than or equal to 200
{
bills = 500 + (units-100)*7;  // Calculates Bill
}
else if(units<=300) // Checks if units consumed are less than or equal to 300
{
bills = 1200 + (units-200)*10; // Calculates Bill
}
else 
{
bills = 2200 + (units-300)*12; // Calculates Bill
}
printf("Bill: Rs. %.2f",bills); // Prints Electricity Bill
return 0;
}






