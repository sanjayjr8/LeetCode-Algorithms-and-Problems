#include<stdio.h>


void transpose(float a[10][10], int n);

int main()
{
 int i,j,n;
 float a[10][10];

 printf("Enter order of matrix:\n");
 scanf("%d", &n);
 
 printf("Enter matrix elements:\n");
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f", &a[i][j]);
  }
 }
 
 transpose(a,n);
 
 for(i=0;i< n;i++)
 {
  for(j=0;j< n;j++)
  {
   printf("%f\t",a[i][j]);
  }
  printf("\n");
 }
 
 return 0;
}

void transpose(float a[10][10], int n)
{
 int i,j;
 float tmp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   tmp = a[i][j];
   a[i][j] = a[j][i];
   a[j][i] = tmp;
  }
 }
}
