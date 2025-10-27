#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*ptr;
}
*top,*temp,*top1;
int topelement();
void push(int data);
void pop();
void empty();
void display();
void stackcount();
int count=0;
void destroy();
void create();
void main()
{
int no,ch,e;
clrscr();
printf("\n 1.PUSH \n 2.POP \n 3.TOP \n 4.EMPTY \n 5.EXIT \n 6.DISPLAY \n 7.STACK COUNT \n 8.DESTROY \n");
create();
while(1)
{
printf("Enter the choice: \n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data: \n");
scanf("%d",&no);
push(no);
break;
case 2:pop();
break;
case 3:if(top==NULL)
{
printf("Stack is Empty \n");
}
else
{
e=topelement();
printf("The top element in the stack is: %d \n",e);
}
break;
case 4:empty();
break;
case 5:exit(0);
case 6:display();
break;
case 7:stackcount();
break;
case 8:destroy();
break;
default:printf("The choice is Invalid\n");
break;
}
}
}
void create()
{
top=NULL;
}
int topelement()
{
return(top->info);
}
void push(int data)
{
if(top==NULL)
{
top=(struct node*)malloc(sizeof(struct node));
top->ptr=NULL;
top->info=data;
}
else
{
temp=(struct node*)malloc(sizeof(struct node));
temp->ptr=top;
temp->info=data;
top=temp;
}
count++;
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("Error:Trying to pop from empty stack\n");
return;
}
else
{
top1=top1->ptr;
printf("Popped value=%d\n",top->info);
free(top);
top=top1;
count--;
}
}
void stackcount()
{
printf("The number of elements in stack=%d\n",count);
}
void display()
{
top1=top;
if(top==NULL)
{
printf("Stack is Empty!\n");
return;
}
printf("The stack elements are:\n");
while(top1!=NULL)
{
printf("%d\n",top1->info);
top1=top1->ptr;
}
}
void empty()
{
if(top==NULL)
{
printf("Stack is empty\n");
}
else
{
printf("Stack is not empty and contains %d elements\n",count);
}
}
void destroy()
{
top1=top;
while(top1!=NULL)
{
top1=top->ptr;
free(top);
top=top1;
top1=top1->ptr;
}
free(top1);
top=NULL;
printf("All stack elements are destroyed\n");
count=0;
}
