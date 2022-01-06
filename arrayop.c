#include<stdio.h>
#include<stdlib.h>
int pos,i,a[10],b[10],n,k,c[100];
void merge(int k)
{
	int m;
	printf("Enter the no of elements in 2nd array :");
	scanf("%d",&m);
	printf("enter %d elements to the array:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("Array after merging \n");
	for(i=0;i<k;i++)
	printf("%d\t",c[i]);
	
}
void search(int n)
{
	int x,f=0;
	printf("Enter the element:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	printf("Element is found");
	else
	printf("Element not found");
}
void insert(int pos)
{
	int x;
	printf("Enter the element to be inserted:");
	scanf("%d",&x);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	a[i]=a[i-1];
	a[pos-1]=x;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void delet(int pos)
{
for(i=pos-1;i<n-1;i++)
a[i]=a[i+1];
printf("Array after deletion \n");
n=n-1;
for(i=0;i<n;i++)
printf("%d\t",a[i]);	
}
void main()
{
int ch;
printf("enter the no of elements:");
scanf("%d",&n);
printf("\nEnter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
k=i;
printf("\nArray before operation\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

do{
	printf("\nMAIN MENU\n");
	printf("1.INSERT	\n2.DELETE\n3.SEARCH\n4.MERGE\n");
	printf("Enter the choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the positon:");
	        scanf("%d",&pos);
			insert(pos);
			break;
		case 2:
			printf("Enter the positon:");
	        scanf("%d",&pos);
			delet(pos);
			break;
		case 3:
			search(n);
			break;
		case 4:
			        
			merge(k);
			break;
		case 5:
			exit(0);
			break;

	}
  }while(1);
}