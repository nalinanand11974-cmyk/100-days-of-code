// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main(void)
{
int matrix[MAX_ROWS][MAX_COLS];
int i,j,rows,columns,sum=0;
scanf("%d %d",&rows,&columns);
if(rows<1||rows>MAX_ROWS||columns<1||columns>MAX_COLS)
{
printf("INVALID MATRIX SIZE.\n");
return 1;
}
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&matrix[i][j]);
}
}
printf("\n");
for(i=0;i<rows;i++)
{
sum=0;
for(j=0;j<columns;j++)
{
sum=sum+matrix[i][j];
}
printf("%d ",sum);
}
return 0;
}
