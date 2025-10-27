#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void initialize();
void lqinsert();
void lqdelete();
void lqtraverse();
int queue[MAXSIZE];
int front,rear,choice,num,i;
void main()
{
clrscr();
initialize();
while(1)
{
clrscr();
printf("\n STATIC IMPLEMENTATION OF LINEAR QUEUE");
printf("\n_______________________________________");
printf("\n1.Insert");
printf("\n2.Delete");
printf("\n3.Traverse");
printf("\n4.Exit");
printf("\n__________________");
printf("\n\n Enter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case 1:lqinsert();
break;
case 2:lqdelete();
break;
case 3:lqtraverse();
break;
case 4:exit(0);
default:
printf("\n Invalid choice");
}
getch();
}
}
void initialize()
{
front=rear=-1;
}
void lqinsert()
{
if(rear==MAXSIZE-1)
{
printf("\n Queue is full");
return;
}
printf("\n Enter the element to be inserted:");
scanf("%d",&num);
rear++;
queue[rear]=num;
if(front==-1)
front=0;
}
void lqdelete()
{
if(front==-1)
{
printf("\n Queue is empty");
return;
}
num=queue[front];
printf("\n Deleted element is:%d",num);
front++;
if(front>rear)
front=rear=-1;
}
void lqtraverse()
{
if(front==-1)
{
printf("\n Queue is empty");
return;
}
else
{
printf("\n Queue elements are:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
}
