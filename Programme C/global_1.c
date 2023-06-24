#include<stdio.h>
#define N 5
int a[N];
int n=-1;
void insert()
{
	int i;
	if(n+1==N)
	{
		printf("\nArray is Full");
	}
	else
	{
		n=n+1;
		printf("Enter Element for A[%d]:",n);
		scanf("%d",&a[n]);
	}
}
int search(int num)
{
	int i,count=0,x=-1;
	for(i=0;i<N;i++)
	{
		if(a[i]==num)
		{
			printf("\nElement %d found in Position %d",num,i+1);
			x=i;
			return x; 
		}
	}
	return x;
}
void delete(int num,int pos)
{
	int i;
	for(i=pos;i<N;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("\nElement %d Deleted",num);	
}
void sort()
{
	int i,j,temp;
	
	for(i=0;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	disp();
}
void disp()
{
	int i;
	if(n==-1)
	{
		printf("Array is empty");
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
} 
void main()
{
	int ch,num,x,delNum;
	char c;
	while(ch!=6)
	{
		printf("\n1.Insert\n2.Display\n3.Search\n4.Delete\n5.Sort\n6.exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				disp();
				break;
			case 3:	
				printf("Enter the number to be searched:");
				scanf("%d",&num);
				x=search(num);
				if(x==-1)
				{
					printf("Element Not Found");
				}
				break;
			case 4:
				printf("Enter the element to be deleted:");
				scanf("%d",&delNum);
				x=search(delNum);
				if(x==-1)
				{
					printf("Element Not Found");
				}
				else
				{
					delete(delNum,x);
				}
			break;
			case 5:
				sort();
				break;
			case 6:
			break;
			default:
				printf("Invalid Choice!");
				break;				
		}		
	}
}
