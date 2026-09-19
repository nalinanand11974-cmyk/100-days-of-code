// Q79: Perform diagonal traversal of a matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int rows,columns,matrix[MAX_ROWS][MAX_COLS];
int i,j,k;
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
for(k=0;k<rows+columns-1;k++)
{
if(k%2==0)
{
for(i=k;i>=0;i--)
{
j=k-i;
if(i<rows&&j<columns)
printf("%d ",matrix[i][j]);
}
}
else
{
for(j=k;j>=0;j--)
{
i=k-j;
if(i<rows&&j<columns)
printf("%d ",matrix[i][j]);
}
}
}
return 0;
}
