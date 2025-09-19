#include<stdio.h>
#include<stdlib.h>
void main()
{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n 1.Create");
printf("\n 2.Union");
printf("\n 3.Find");
printf("\n 4.Exit");
while(1)
{
printf("\n Enter Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter number of Elements in set:");
scanf("%d",&n);
printf("Enter elements in set:");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=i;
}
break;
case 2:
printf("\n Enter the index of elements(2 indices) which are to be connected(Union):\n");
scanf("%d%d",&a,&b);
temp=arr2[a];
for(i=0;i<n;i++)
{
if(arr2[i]==temp)
arr2[i]=arr2[b];
}
printf("\n Elements status after Union \n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr2[i]);
}
printf("\n Elements have been successfully Connected(Union Operation) \n");
break;
case 3:
printf("\n Enter the Index of elements (2 Indices) whose connection is to be checked(Find Operation):\n");
scanf("%d%d",&a,&b);
if(arr2[a]==arr2[b])
{
printf("\n Elements at Indices %d and %d are connected \n",a,b);
}
else
{
printf("\n Elements at Indices %d and %d are not connected \n",a,b);
break;
case 4:
exit(0);
break;
default:
printf("\n Wrong choice, Please select a valid choice");
break;
}
}
}
}






