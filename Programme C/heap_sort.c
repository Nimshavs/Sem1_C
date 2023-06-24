#include <stdio.h>
#define N 5
int a[N];
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int a[], int n, int i)
{
	int large = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && a[l] > a[large])
 	large = l;
	if (r < n && a[r] > a[large]) 
	large = r;
	if (large != i)
	{
		swap(&a[i], &a[large]); heapify(a, n, large); 
	}
}
void heapSort(int a[], int n)
{
	int i;
   	for ( i = n / 2 - 1; i >= 0; i--)
	heapify(a, n, i);
	for (i = n - 1; i >= 0; i--)
	{
		swap(&a[0], &a[i]); heapify(a, i, 0);
	}
}
void printArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; ++i) 
	printf("%d ", a[i]); 
	printf("\n");
}
int main() 
{
	int i;
	printf("\nArray Size : %d\n",N); 
	for( i=0; i<N; i++)
	{
		printf("\nEnter the array [%d] element: ",i+1); 
		scanf("%d",&a[i]);
	}
	int n = sizeof(a) / sizeof(a[0]);
	heapSort(a, n);
	printf("\nHeap sorted array is : "); 
	printArray(a, n);
	return 0;
}

