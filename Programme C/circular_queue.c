#include<stdio.h>
int f=-1;
int r=-1;
int q[5];
void enqueue(int e)
{
	if((r+1)%5==f)
	{
		printf("\nQueue is full");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		r=(r+1)%5;
		q[r]=e;
		printf("\nenqueued=%d",e);
	}
}
void dequeue()
{
	if(f==-1)
	{
		printf("\nQueue empty");
	}
	else
	{
		printf("\ndequeue=%d",q[f]);
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			f=(f+1)%5;
		}
	}
}
int main()
{
	int i=0;
	for(i=4;i<10;i++)
	{
		enqueue(i);	
	}
	for(i=4;i<7;i++)
	{
		dequeue();	
	}
}

