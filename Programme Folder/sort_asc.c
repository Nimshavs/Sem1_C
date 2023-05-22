#include<stdio.h>
int main()
{
	int n,i,t,j;
	int a[i];
	printf("\n Enter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the elements: ");
		scanf("%d",&a[i]);
		
	}
	printf("\nThe Unsorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("\nThe Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
}
