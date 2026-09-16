// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include<stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int main()
{
int arr1[MAX_ROWS][MAX_COLS],arr2[MAX_ROWS][MAX_COLS],result[MAX_ROWS][MAX_COLS];
int i,j,r1,c1,r2,c2;
scanf("%d %d",&r1,&c1);
if(r1<0||c1<0||r1>MAX_ROWS||c1>MAX_COLS)
{
printf("INVALID MATRIX SIZE\n");
return 1;
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&arr1[i][j]);
}
}
scanf("%d %d",&r2,&c2);
if(r2<0||c2<0||r2>MAX_ROWS||c2>MAX_COLS)
{
printf("INVALID MATRIX SIZE\n");
return 1;
}
if(r1!=r2||c1!=c2)
{
printf("MATRICES CANNOT BE ADDED");
return 1;
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&arr2[i][j]);
}
}
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
result[i][j]=arr1[i][j]+arr2[i][j];
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%4d",result[i][j]);
}
printf("\n");
}
return 0;
}
