// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int rows,columns,matrix[MAX_ROWS][MAX_COLS];
int flag=1,i,j;
scanf("%d %d",&rows,&columns);
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
if(rows!=columns)
{
flag=0;
}
else
{
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
if(matrix[i][j]!=matrix[j][i])
{
flag=0;
break;
}
}
}
}
if(flag==1)
printf("True");
else
printf("False");
return 0;
}


