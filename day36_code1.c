// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main(void)
{
int matrix[MAX_ROWS][MAX_COLS];
int rows,columns,i,j;
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
printf("\n");
for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
printf("%2d",matrix[i][j]);
}
printf("\n");
}
return 0;
}


