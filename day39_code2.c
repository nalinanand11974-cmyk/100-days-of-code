// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int rows,columns,matrix[MAX_ROWS][MAX_COLS];
int i,j,sum=0;
scanf("%d%d",&rows,&columns);
if(rows<1||rows>MAX_ROWS||columns<1||columns>MAX_COLS)
{
printf("INVALID MATRIX SIZE\n");
return 1;
}
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
scanf("%d",&matrix[i][j]);
}
}
for(i=0;i<rows;i++)
{
sum=sum+matrix[i][i];
}
printf("%d",sum);
return 0;
}
