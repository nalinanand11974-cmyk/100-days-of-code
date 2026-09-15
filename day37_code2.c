// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main(void)
{
int i,j,rows,columns;
int matrix[MAX_ROWS][MAX_COLS],transpose[MAX_COLS][MAX_ROWS];
scanf("%d %d",&rows,&columns);
if(rows<1||rows>MAX_ROWS||columns<1||columns>MAX_COLS)
{
printf("Invalid matrix size.\n");
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
for(j=0;j<columns;j++)
{
transpose[j][i]=matrix[i][j];
}
}
printf("\n");
for(i=0;i<columns;i++)
{
for(j=0;j<rows;j++)
{
printf("%4d",transpose[i][j]);
}
printf("\n");
}
return 0;
}
