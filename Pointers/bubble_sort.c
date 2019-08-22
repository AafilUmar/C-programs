#include<stdio.h>
void array_print(int *,int);
void bubble_sort(int *,int);
void main()
{
int a[5]={13,11,22,7,5},i;
array_print(a,5);
bubble_sort(a,5);
array_print(a,5);
}

void array_print(int *p,int i)
{
int j;
for(j=0;j<i;j++)
{
printf("%d ",p[j]);
}
printf("\n");
}
void bubble_sort(int *p,int n)
{
int i,j,t,*q;
q=p;

for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(*q>*(q+1))
{
t=*q;
*q=*(q+1);
*(q+1)=t;
}
q++;
}
q=p;
}
}
