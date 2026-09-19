// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int rows,columns,matrix[MAX_ROWS][MAX_COLS];
int i,j,flag=1;
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
for(j=i+1;j<rows;j++)
{
if(matrix[i][i]==matrix[j][j])
{
flag=0;
break;
}
}
}
if(flag==1)
printf("True");
else
printf("False");
return 0;
}
