#include <stdio.h>
void main()
{
int n,a[100],search,i,count=0,t=0,r,l,mid,flag;
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
printf("Enter the element to be searched:");
t++;
scanf("%d",&search);
t++;
l=0;
r=n-1;
t++;
while(l<=r)
{
mid=(l+r)/2;
t++;
if(search==a[mid])
{
flag=1;
break;
}
else if(search>a[mid])
{
l=mid+1;
}
else if(search<a[mid])
{
r=mid-1;
}
}
t++;
if(flag==0)
{
printf("\nElement not found");
t++;
}
else
{
printf("\nElement found at position %d",mid+1);
t++;
}
printf("\nSpace complexity=%d",(9*4)+(n*4));
t++;
t++;
printf("\nTime complexity=%d",t+1);
}
