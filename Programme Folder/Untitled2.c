#include<stdio.h>
#define N 10
int stack[N];
int top=-1;
char ch;
char e;
void push()
{
	
	if(top+1==N)
	{
		printf("\nthe stack is full");
	}
	else
	{
		printf("\nenter the element to be pushed");
		scanf("\n%c",&e);
		getchar();
		top=top+1;
		stack[top]=e;
		printf("\nthe pushed element is %c",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nthe stack is empty");
	}
	else
	{
	
	top--;
	printf("%c",stack[top]);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\nthe stack is empty");
	}
	else{
	
	printf("\n\nthe top element is now :%c",stack[top]);
	}
}
int menu()
{
    int ch;
	printf("\n\n1.push\n2.pop\n3.peek\n4.exit\nenter your choice");
	scanf("%d",&ch);
	return ch;
}
int process()
{
	int ch;
	
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
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
			printf("\nwrong choice");	
			break;
		}
	}
}
int main()
{
	
	process();
}
