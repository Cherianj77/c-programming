#include <stdio.h>
void enqueue();
void dequeue();
void disply();
int front=-1,rear=-1,m,item;
int a[100];
void main()
{
int n;
printf("Enter the size of queue:");
scanf("%d",&m);
printf("Circular queue operations\n");
printf("1.Enqueue operation\n");
printf("2.Dequeue operation\n");
printf("3.Disply queue elements\n");
printf("4.Exit\n");
while(n!=4)
{
printf("Enter your choice=");
scanf("%d",&n);
switch(n)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:disply();
break;
case 4:printf("Exiting...");
break;
}
}   
}
void enqueue()
{
if(front==((rear+1)%m))
{
printf("Queue overflow\n");
}
else if(front==-1 && rear==-1)
{
front++;
rear++;
printf("Enter the element:");
scanf("%d",&a[rear]);
}
else
{
rear=(rear+1)%m;
printf("Enter the value:\n");
scanf("%d",&a[rear]);
}
}
void dequeue()
{
if(front==-1 && rear==-1)
{
printf("Queue underflow\n");
}
else if(front==rear)
{
item=a[front];
front=-1;
rear=-1;
printf("The deleded value is %d\n ",item);
}
else
{
item=a[front];
front=(front+1)%m;
printf("The deleted value is %d\n",item);
}  
}
void disply()
{    
if(front==-1 && rear==-1)
{
printf("The queue is empty\n");
}
else
{
for(int i=front;i<=rear;i++)
{
printf("%d\t",a[i]);
}
}
}
