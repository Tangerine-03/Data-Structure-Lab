#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
int i,choice;
clrscr();
while(1)
{
printf("\n 1.ENQUEUE-INSERT \n 2.DEQUEUE-DELETE \n 3.DISPLAY \n 4.EXIT \n");
printf("Enter the Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enqueue-Insertion Operation \n");
enqueue();
break;
case 2: printf("Dequeue-Deletioon Operation \n");
dequeue();
break;
case 3: printf("Display Operation \n");
display();
break;
case 4: exit(0);
default:printf("INVALID CHOICE\n");
}
}
}
void enqueue()
{
if((rear+1)%SIZE==front)
{
printf("Queue Overflow\n");
}
else
{
if(front==-1 && rear==-1)
{
front=rear=0;
}
else
{
rear=(rear+1)%SIZE;
}
printf("Enter the Element:");
scanf("%d",&queue[rear]);
}
}
void dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("Queue Underflow \n");
}
else if(front==rear)
{
printf("The Dequeued Element i %d",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\n The Dequeued Element nis %d",queue[front]);
front=(front+1)%SIZE;
}
}
void display()
{
int i=front;
if(front==-1 && rear==-1)
{
printf("Queue is Empty \n");
}
else
{
printf("\n Elements in a Queue are:");
while(i!=rear)
{
printf("%d\t",queue[i]);
i=(i+1)%SIZE;
}
printf("%d\t",queue[rear]);
}
}


