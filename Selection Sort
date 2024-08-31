#include <stdio.h>
void main()
{
int n,a[100],t=0,i,j,temp,min;
t++;
printf("Enter the number of elements:");
t++;
scanf("%d",&n);
t++;
printf("Enter the elements:");
t++;
t++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
t++;
}	
t++;
for(i=0;i<n-1;i++)      
{
min=i;
t++;
for(j=i+1;j<n;j++)
{
t++;
if(a[j]<a[min])
{
min=j;
}
}
t++;
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}                    
}
printf("Sorted List is:\n");
t++;
t++;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
t++;
}
printf("\nSpace complexity=%d",(6*4)+(n*4));
t++;
t++;
printf("\nTime complexity=%d",t+1);
}
