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
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
t++;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("Sorted list is:\n");
t++;
t++;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
t++;
}
printf("\nSpace complexity=%d",(5*4)+(n*4));
t++;
t++;
printf("\nTime complexity=%d",t+1);
}
