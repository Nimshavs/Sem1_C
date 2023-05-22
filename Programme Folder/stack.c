#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
	int e;
	if(top+1==N)
	{
		printf("Stack is full");
	}else
	{
		printf("Enter the element: ");
		scanf("%d",&e);
		top=top+1;
		stack[top]=e;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\npoped element %d",stack[top]);
		top=top-1;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");	
	}
	else
	{
		printf("\nTop Elemnt is %d",stack[top]);
	}
}
void main()
{
	int ch,n,i;
	for(i=0;i<n;i++){
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			default:
				printf("WRONG CHOICE");
				break;
		}
	}
	
}

