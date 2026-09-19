// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int r1,c1,r2,c2,a[MAX_ROWS][MAX_COLS],b[MAX_ROWS][MAX_COLS],result[MAX_ROWS][MAX_COLS];
int i,j,k,sum;
scanf("%d %d",&r1,&c1);
if(r1<1||r1>MAX_ROWS||c1<1||c1>MAX_COLS)
{
printf("INVALID MATRIX SIZE\n");
return 1;
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
scanf("%d %d",&r2,&c2);
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
if(c1!=r2)
{
printf("Multiplication not possible");
return 0;
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
sum=0;
for(k=0;k<c1;k++)
{
sum=sum+a[i][k]*b[k][j];
}
result[i][j]=sum;
}
}
printf("\n\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%4d",result[i][j]);
}
printf("\n");
}
return 0;
}