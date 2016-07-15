#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,a[100];
clrscr();
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(i!=j)
for(k=0;k<n;k++)
{
if(a[i]+a[j]==a[k])
{
printf("%d+%d=%d:",a[i],a[j],a[k]);
}
}
}
}
getch();
}
