// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>
int main()
{
float sp,cp,profit,loss,percentage; // Declares five float variables
printf("Enter Cost Price and Selling Price: "); 
scanf("%f %f",&cp,&sp); // Takes cost price and selling price as input
if(sp>cp) // Checks if selling price is more than cost price
{
profit = sp-cp; // Calculates profit
percentage = (profit/cp)*100; // Calculates profit percentage
printf("Profit = %.2f",percentage); // Prints profit percentage
printf("%%");
}
else if(cp>sp) // Checks if cost price is more than selling price
{
loss = cp-sp; // Calculates loss
percentage = (loss/cp)*100; // Calculates loss percentage 
printf("Loss = %.2f",percentage); // Prints loss percentage 
printf("%%");
}
else 
{
printf("No Profit No Loss"); // Prints message if cost price and selling price are equal
}
return 0;
}



