#include<stdio.h>
int q[5];
int f=-1,r=-1;
void enqueue(int e)
{
	if(r==5-1)
	{
		printf("\nQueue is full");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		r=r+1;
		q[r]=e;
		printf("\nenqueued element is: %d",e);
	}
}
void dequeue()
{
	int i;
	if(f==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nDequeued element is : %d ",q[f]);
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			for(i=0;i<r;i++)
			{
				q[i]=q[i+1];
			}
			r=r-1;
		}
	}
}

int main()
{
	int i;
	for(i=1;i<5;i++)
	{
		enqueue(i);
	}
	for(i=1;i<4;i++)
	{
		dequeue();
	}
}

