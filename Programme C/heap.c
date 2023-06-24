#include<stdio.h>
void heaptree(int a[], int n,int e)
{
 	int i,t;
 	i = n;
 	a[i] = e;
 	while(i != 0)
 	{
 		if(a[i] < a[(i-1)/2])
 		{
 			break;
		}
 	else
	{
 		t = a[i];
 		a[i] = a[(i-1)/2];
 		a[(i-1)/2] = t;
 	}
 	i = (i - 1)/2;
 	}
}
void disparr(int a[],int n)
{
 	int i;
 	for(i = 0;i <= n;i++)
 	{
 	printf("%d\t",a[i]);
	}
}
int main()
{
 	int a[5];
 	heaptree(a,0,40);
 	heaptree(a,1,14);
 	heaptree(a,2,3);
 	heaptree(a,3,7);
 	heaptree(a,4,10);
 	disparr(a,4);
 	return 0;
}
