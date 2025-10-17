#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],b[20],c[40],i,m,n,k;
	clrscr();
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the element of the first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	k=i;
	printf("Enter the size of the second array:");
	scanf("%d",&m);
	printf("Enter the element of the second array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("The merged Array:\t");
	for(i=0;i<k;i++)
	{
		printf(" %d",c[i]);
	}
getch();
return 0;
}

